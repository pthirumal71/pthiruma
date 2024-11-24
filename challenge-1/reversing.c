/**
* @file reversing.c
* @date 13 nov 2024
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define MAX_FLAG_LEN 64

int FLAG_LENGTH = 0;
uint8_t transformations[MAX_FLAG_LEN] = {0};

void set_flag_len(char *given_flag) {
    while (FLAG_LENGTH < MAX_FLAG_LEN && given_flag[FLAG_LENGTH] != '\0') {
        FLAG_LENGTH++;
    }
}

// Initializes the transformation key given a flag.txt file
void init() {
    char flag[MAX_FLAG_LEN];
    FILE *f = fopen("flag.txt", "r");
    if (f == NULL) {
	    printf("Flag File is Missing. Make sure you are in the correct Directory\n");
		exit(0);
	}
    fgets(flag,MAX_FLAG_LEN,f);

    set_flag_len(flag);

    // Read the flag and compute transformations
    for (int i = 0; i < FLAG_LENGTH; i++) {
        transformations[i] = (flag[i] ^ (0x10 + i)) & 0x7F;
    }
}

void print_transformation_key() {
    printf("Here are some of my favorite hex numbers\n");
    for (int i = 0; i < FLAG_LENGTH; i++) {
        printf("0x%02X ", transformations[i]);
    }
    printf("\n");
}

int validate_flag(char *input) {
    // Validate the core of the flag
    for (int i = 0; i < FLAG_LENGTH; i++) {
        uint8_t transformed_char = (input[i] ^ (0x10 + i)) & 0x7F;
        if (transformed_char != transformations[i]) {
            printf("Failed at character %d\n", i);
            return 0;
        }
    }

    printf("Congratulations! You found the flag!\n");
    return 1;
}

int main() {
    init();
    print_transformation_key();
    char input[FLAG_LENGTH + 1];
    printf("Enter the flag: ");
    scanf("%28s", input);
    validate_flag(input);
    return 0;
}