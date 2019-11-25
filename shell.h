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

void welcome_shell(void);
char *create_buffer(void);
void _printf(char *str);
int _strleng(char *str);
void check_arg(char *str);
void exec_proc(char *arg);
//void start_shell(void);
#endif /* SHELL_H */
