#include "shell.h"
char *_getline(void)
{
	int bufsize = ONE_BUFSIZE;
	int i = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer)
	{
		fprintf(stderr, "lsh: allocation error\n");
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
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
