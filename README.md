# Simple Shell

This is a project for Holberton School that simulates a shell as a program that interprets basic commands entered in the terminal by users


# User Guide

The simple shell, in our first version was buildied with functions that implement structures, system call and functions of libraries like example **<sys/types.h>  <sys/stat.h>** that together read commands for show the content the a directory and his files etc.

## Installation Guide

Download the project in this address:
[https://github.com/cbayonao/simple_shell](https://github.com/cbayonao/simple_shell)

### Compilation

You should compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Examples

execute in this form ./shell 

Use commands like ls -l for list directories for example:
******************************************
******************************************

	**WELCOME TO SIMPLE SHELL**

		carlos

******************************************
******************************************

$ ls

README.md  _strleng.c	 create_buffer.c	  handle_sig.c 	 man_1_simple_shell 	 shell.h	start_shell.c
_printf.c 	 check_arg.c	exec_proc.c	 main.c        shell		   split_str.c		welcome.c


| Commands       | Options                       |
|----------------|-------------------------------|
|ls              |`-l, -a, -t`                   |
|cd              |`-, ~, ..`                     |
|pwd             |`Display directory actuall`    |


### Authors
---
Camilo Bayona Orduz
camilo.bayona@holbertonschool.com

Juan Carlos Rengifo
1074@holbertonschool.com

