#include "shell.h"
void start_shell();
void check_arg(char *str);
void split_str (char *s1);
void new_Pdi(char *arg);
//void _execve(char *arg);
/*
 * main -funtion principal init program simple shell
 * Return: Zero for Succes
 */
int main(int argc, char *argv[]) 
{
	welcome_shell();

	if (argc > 1)
	{
	int j = 1;
	for (int i = argc - 1; i > 0; i--, j++)
	//	_printf(argv[j]);
		split_str(argv[j]);
	}
	else
		start_shell();

   return (0);
} 

void start_shell()
{
	char *buffer;
	size_t bufsize = 64;
	size_t char_input;


	buffer = create_buffer();
	_printf("$ ");
	char_input = getline(&buffer, &bufsize, stdin);
	if (char_input == EOF)
	{
		free(buffer);
		exit(1);
	}
	check_arg(buffer);
//	_execve(buffer);
//	new_Pdi(buffer);
	free(buffer);
	start_shell();
}

void check_arg(char *str)
{
	int i;
	int j = _strleng(str);
	char *copy;
	
	j -=1;
	copy = malloc(j * sizeof(char));	

	i = 0;
	while (str[i] != '\n')
	{
		copy[i] = str[i];
		i++;
	}
	str = copy;

	new_Pdi(str);
}

void split_str(char *s1)
{
   char s2[] = " ,";
   char *ptr;

	ptr = strtok( s1, s2 );
	if (ptr != NULL)
	{
		while(ptr != NULL)
		{
			printf("%s", ptr);
		ptr = strtok(NULL, s2);
		}
	}
}

void new_Pdi(char *arg)
{
	char *str[2];
	int status, j;
	pid_t id_pdi;

	id_pdi = fork();
	str[0] = arg;
	str[1] = NULL;
	if (id_pdi == 0)
	{
		execve(str[0], str, NULL);
		sleep(2);
		exit(1);
	}
	id_pdi = wait(&status);
	if ((WIFEXITED(status)) > 0)
	{}
}
