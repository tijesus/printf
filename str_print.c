#include "main.h"

/**
 * _strlen - helper function
 * @s: character pointer;
 * Return: length of the string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}

/**
 * str_print - print character
 * @char_arg: name given to variadic list
 * Return: length of the string
 */
int str_print(va_list char_arg)
{
	char *str;
	int i, len;

	str = va_arg(char_arg, char *);

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			write(1, str + i, 1);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			write(1, str + i, 1);
		return (len);
	}
}
