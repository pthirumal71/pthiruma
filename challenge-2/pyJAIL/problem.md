# Breaking out of a Python Jail

- Namespace: picoctf/pthiruma
- ID: Baby pyJAIL
- Type: custom
- Category: Miscellaneous
- Points: 1
- Templatable: yes
- MaxUsers: 1

## Description

This python script does not let you do much. Can you still get the flag?

## Details

Connect to the program with netcat: `$ nc {{server}} {{port}}`


The program's source code can be downloaded {{url_for("jail.py", "here")}}.

## Hints

- Eval is not that dangerous is it?


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

## Attributes

- author: pthiruma
- organization: picoCTF
- event: picoCTF Problem Developer Training