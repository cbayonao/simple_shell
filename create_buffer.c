#include "shell.h"
/**
 * create_buffer - Funtion create a buffer en heap of 1024 bytes
 * Return: Pointer Buffer
 **/
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		exit(1);
	*buffer = '\0';
return (buffer);
}

