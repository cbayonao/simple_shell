/**
 * _strleng -Function that move between of array and store his size
 * @str: pointer string
 * Return: size of string
 **/
int _strleng(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
return (i);
}
