#include "shell.h"
/**
 * _getline - checks if the command is a part of a path
 * @str: command
 *
 * Return: 1 on success, 0 on failure
 */
char *_getline()
{

	int bufsize = ONE_BUFSIZE;
	int i = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;
	
	if (!buffer)
	{
		fprintf(stderr, "#CISFUN: allocation error\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			buffer[i] = '\0';
			return buffer;
		}
		else 
		{
			buffer[i] = c;
		}
		i++;
		if (i >= bufsize)
		{
			bufsize += ONE_BUFSIZE;
			buffer = realloc(buffer, bufsize);
			if (!buffer)
			{
				fprintf(stderr, "#CISFUN: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
