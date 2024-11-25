# XOR Binary

- Namespace: picoctf/18739f24
- ID: XOR Binary
- Type: custom
- Category: Binary Exploitation
- Points: 1
- Templatable: yes
- MaxUsers: 1

## Description

This binary transforms a flag. Can you extract it?

## Details

Connect to the program with netcat:


The program's binary can be downloaded {{url_for("final", "here")}}.

## Hints

- What are the properties of XOR

## Solution Overview

Use the hex keys printed to reverse engineer the flag

## Challenge Options

```yaml
cpus: 0.5
memory: 128m
pidslimit: 20
ulimits:
  - nofile=128:128
diskquota: 64m
init: true
```

## Learning Objective

Using GDB or Ghidra to reverse engineer a binaryu


## Attributes

- author: pthiruma
- organization: picoCTF
- event: picoCTF Problem Developer Training
