#include "main.h"
/**
 * format_hex - print a number in hexadecimal format
 * @a: a number ranging from 0 - 15
 * Return: the number characters written to stdout
 */
/*this helps to convert to base 16*/
int format_hex(int a)
{
	int count = 0;

	switch (a)
	{
	case 10:
		_printf("a");
		count++;
		break;
	case 11:
		_printf("b");
		count++;
		break;
	case 12:
		_printf("c");
		count++;
		break;
	case 13:
		_printf("d");
		count++;
		break;
	case 14:
		_printf("e");
		count++;
		break;
	case 15:
		_printf("f");
		count++;
		break;
	default:
		_printf("%d", a);
		count++;
		break;
	}
	return (count);
}

/**
 * hex - convert from base a to base b
 * @a: integer
 * @b: integer
 * Return: the number of characters printed
 */
int hex(unsigned int a, int b)
{
	int c = 0;

	if (a / b == 0)
	{
		c = format_hex(a % b);
		return (c);
	}
	c = hex((a / b), b);
	c += format_hex(a % b);
	return (c);
}

/**
 * xx_print - print an integer as hexadecimal
 * @list_arg: va_list
 * Return: the number of characters wriiten
 */
int xx_print(va_list list_arg)
{
	return (hex(va_arg(list_arg, unsigned int), HEX));
}
