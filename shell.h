#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#define SHELL "/bin/sh"
int _strcmp(char *, char *);
void welcome_shell(void);
char *create_buffer(void);
void _printf(char *str);
int _strleng(char *str);
void check_arg(char *str);
void exec_proc(char *arg);
char split_str(char *s1);
void handle_sigint(int sig);
void start_shell(void);
#endif /* SHELL_H */
