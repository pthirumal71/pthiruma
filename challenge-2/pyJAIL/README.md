# Python Jail Challenge

## Overview

This challenge introduces a Python "jail" where users are restricted from executing certain commands or patterns in their input. 
The objective is to craft an input that bypasses the restrictions and evaluates to `0x18739` in order to reveal the flag.

## Code Breakdown
The program defines a list of regex patterns to block "suspicious" inputs. 
These are:

- Digits: Preventing direct numeric input.
- ord() and chr(): Disabling character-to-number conversions.
- Math operators: +, -, *, /, ^, %.
- Bit operations: <, >, &, |.
- Restricted keywords: exec, eval, lambda, os., class.
- Unicode: Blocking characters beyond the ASCII range.

## Note
The intended solution is to abuse the eval statement in the python code. 
Although this seems pretty difficult, it is actually deceptively simple. 
My aim through this challenge is to introduce players to the dangers of using eval with the user input. 

## Extra
Originally I had a buffer overflow problem. The goal was to call another function but with a specific arguement. It was meant to be a primer for shellcode execution. However I noticed that there were quite a few BOF challenges already so I decided to go with this python jail instead. 