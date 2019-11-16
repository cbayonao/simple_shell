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

void welcome_shell(void);
char *create_buffer(void);
int _printf(char *str);
int _strleng(char *str);
#endif /* SHELL_H */
