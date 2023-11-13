#include "main.h"
/**
 *_strlen - helper function
*@s: character pointer;
*Return: lenght of the string
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
	int len = 0;

	str = va_arg(char_arg, char *);
	if (str != NULL)
	{
		for (; *str; str++)
		{
			if ((*str > 0 && *str < 32) || *str >= 127)
			{
				write(1, "\\x", 2);
				len += 2;
				char *res = convert(*str, 16, 0);
				if (!res[1])
				{
					write(1, "0", 1);
					len += 1;
				}
				write(1, res, _strlen(res));
				len += _strlen(res);
				free(res);
			}
			else
			{
				write(1, str, 1);
				len += 1;
			}
		}
	}
	return len;
}
