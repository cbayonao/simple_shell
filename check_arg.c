#include "shell.h"
/**
 * check_arg -Edit string sended from getline and remove the character \n
 *@str: argument from getline
 * Return: None
 **/
void check_arg(char *str)
{
	int i;
	int j = _strleng(str);
	char *copy;

	j -= 1;
	copy = malloc(j * sizeof(char));

	if (copy == NULL)
	{
		exit(1);
	}

	i = 0;
	while (str[i] != '\n')
	{
		copy[i] = str[i];
		i++;
	}
	str = copy;

	exec_proc(str);
	free(copy);
}
