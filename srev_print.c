#include "main.h"

/**
 * srev_print - string reverse
 * @char_arg: varadic list name
 * Return: a
*/
int srev_print(va_list char_arg)
{
	char *str = va_arg(char_arg, char *);
	int i, a = 0;

	if (str == NULL)
		str = "(null)";
	while (str[a] != '\0')
		a++;
	for (i = a - 1; i >= 0; i--)
		write(1, &str[i], 1);
	return (a);
}
