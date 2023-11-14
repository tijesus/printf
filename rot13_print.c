#include "main.h"
/**
 * *rot13 - rot13 encoding
 * @a: pointer parameter
 * Return: char
 */
int rot13_print(va_list char_arg)
{
	int i, j;
	char *str = va_arg(char_arg, char *);
	char real[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; real[j] != '\0'; j++)
		{
			if (str[i] == real[j])
			{
				write(1, &rot[j], 1);
				break;
			}
		}
		if (real[j] == '\0')
			write(1, &str[i], 1);
	}
	return (i);
}