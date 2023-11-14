#include "main.h"
/**
 * xformat_hex - print a number in hexadecimal format
 * @a: a number ranging from 0 - 15
 * Return: the number characters written to stdout
 */
int xformat_hex(int a)
{
	int count = 0;

	switch (a)
	{
	case 10:
		_printf("A");
		count++;
		break;
	case 11:
		_printf("B");
		count++;
		break;
	case 12:
		_printf("C");
		count++;
		break;
	case 13:
		_printf("D");
		count++;
		break;
	case 14:
		_printf("E");
		count++;
		break;
	case 15:
		_printf("F");
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
 * xhex - convert from base a to base b
 * @a: integer
 * @b: integer
 * Return: number of characters written
 */
int xhex(unsigned int a, int b)
{
	int c = 0;

	if (a / b == 0)
	{
		c = xformat_hex(a % b);
		return (c);
	}
	c = xhex((a / b), b);
	c += xformat_hex(a % b);
	return (c);
}

/**
 * xxx_print - print an integer as hexadecimal
 * @list_arg: va_list
 * Return: the number of characters wriiten
 */
int xxx_print(va_list list_arg)
{
	return (xhex(va_arg(list_arg, unsigned int), HEX));
}
