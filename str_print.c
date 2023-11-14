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
 * @char_arg: name given to varadic list
 * Return: 0 success
*/
int str_print(va_list char_arg)
{
	char *str;

	str = va_arg(char_arg, char *);
    if (str != NULL)
    {
        write(1, str, _strlen(str));
        return (_strlen(str));
    }
	return (0);
}
