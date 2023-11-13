#include "main.h"
/**
 * str_print - print character
 * @char_arg: name given to varadic list
 * Return: 0 success
*/
int str_print(va_list char_arg)
{
	char *str;

	str = va_arg(char_arg, char *);
    if (str != NULL)
    {
        write(1, str, strlen(str));
        return (strlen(str));
    }
	return (0);
}
