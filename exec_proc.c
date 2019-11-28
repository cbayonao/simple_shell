#include "shell.h"
/**
 * exec_proc - Function that create new PID and execute commands
 *@arg: commands
 * Return:None
 **/
void exec_proc(char *arg)
{
	char *str[2];
	int status;
	pid_t id_pdi;

	if (arg != NULL)
	{
		id_pdi = fork();
		if (id_pdi == -1)
		{
			perror("Error");
			exit(1);
		}

		str[0] = arg;
		str[1] = NULL;
		if (id_pdi == 0)
		{
			execve(str[0], str, NULL);
			exit(1);
		}
	}
		id_pdi = wait(&status);
		if ((WIFEXITED(status)) > 0)
		{}
}
