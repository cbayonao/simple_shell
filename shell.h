#ifndef SHELL_H
#define SHELL_H
#define ONE_BUFSIZE 1024
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

int _atoi(char *);
char *_getline(void);
void welcome_shell(void);
char *create_buffer(void);
void _printf(char *);
int _strleng(char *);
void check_arg(char *);
void exec_proc(char *);
//void start_shell(void);
#endif /* SHELL_H */
