#include "main.h"

/**
 * _printf - funtions to print
 * @format: format string
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	unsigned int sum_char = 0;
	va_list list_arg;

	check fmat[] = {
		{"c", char_print}, {"s", str_print}, {"%", per_print}, {"d", dec_print},
		{"i", dec_print}, {"b", u_to_b}, {"r", srev_print}, {"R", rot13_print}
		};

	unsigned long size = sizeof(fmat) / sizeof(fmat[0]);

	va_start(list_arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	sum_char += x_print(format, fmat, list_arg, size);
	va_end(list_arg);
	return (sum_char);
}
