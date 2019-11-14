#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

typedef struct _node
{
	void *data;
	struct _node *next;
} Node;

typedef struct _linkedList
{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;
#endif /* SHELL_H */
