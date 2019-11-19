#include "shell.h"
/**
 * _printf -Function that display arguments entered into shell
 * @str: pointer with information from buffer
 * Return: type data ssize_t
 **/
void _printf(char *str)
{
	size_t len;

	len = _strleng(str);
	write(1, str, len);
}

