#include "shell.h"
/**
 * _atoi - Transform a char in int variable.
 * @s: The char characters that be as input and it will change in int variable
 * Return: The conversion.
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int i, siesdig, noeschar, signo;

	siesdig = 0;
	signo = 1;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			signo *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			siesdig = 1;
			noeschar = 1;
		}
		else
		{
			noeschar = 0;
		}
		if (siesdig == 1 && noeschar == 0)
			break;
	}
	return (res * signo);
}
