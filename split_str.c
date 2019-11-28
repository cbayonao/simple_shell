#include "shell.h"
/**
 * split_str -Funtion that cut a string
 * @s1: pointer to a string
 * Return: None
 **/
char split_str(char *s1)
{
	char s2[] = " \n \0";
	char *ptr, *copy;

	ptr = strtok(s1, s2);
	if (ptr == NULL)
	{
		perror("Error:Token");
			exit(1);
	}
	while (ptr != NULL)
	{
		ptr = strtok(NULL, s2);
		if (ptr != NULL)
		{
			int aux = 0;
			int j = _strleng(ptr);

			copy = malloc(j * sizeof(char));
			for (; aux < j; aux++)
			{
				*(copy + aux) = *(ptr + aux);
			}
		}
	}
	free(copy);
return (*copy);
}
