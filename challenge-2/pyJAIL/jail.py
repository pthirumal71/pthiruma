'''
A relatively simple python jail
'''
import re

FLAG = ""

# Read the flag
with open("flag.txt", "r") as f:
    FLAG = f.read().strip()

if not FLAG:
    print("Flag File is Missing. Make sure you are in the correct Directory")

# This regex checks for sus patterns
regex = [
    # No digits
    r'\d',

    # No ord or chr
    r'ord\(',
    r'chr\(',

    # I dont like math so you can't use it either
    r'\+', r'-', r'\*',  r'/', r'\^', r'%',

    # No bit shifting either
    r'<', r'>',

    # No bit manipulation
    r'&', r'\|',

    # No RCE, this is my code not yours
    r'exec', r'eval', r'lambda', r'os.', r'class',

    # No characters beyond ASCII range
    r'[\U000000ff-\U0010ffff]'

]

print("People may have broken out of Alcatraz but can you break out of python")
user_str = input("Try your luck: ")

for r in regex:
    if re.search(r, user_str):
        print("Take this time in jail to reflect on yourself")
        exit()

if eval(user_str) == 0x18739:
    print(FLAG)
else:
    print("Know yourself and your enemy - Sun Tzu")