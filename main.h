#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define ZERO 0
#define BINARY 2
#define HEX 16
#define OCTAL 8

/**
 * struct format - format sturct
 * @lett: format iddentifier
 * @func: functions pointer
 */
typedef struct format
{
	char *lett;
	int (*func)(va_list);
} check;

int _printf(const char *format, ...);
int char_print(va_list char_arg);
int str_print(va_list char_arg);
int per_print(va_list char_arg);
int dec_print(va_list char_arg);
int u_to_b(va_list list_arg);
int wint(int a, int c);
int x_print(const char *fmt, check *fmat, va_list list, unsigned long size);
int srev_print(va_list char_arg);
int _strlen(char *s);
int rot13_print(va_list char_arg);
int xx_print(va_list list_arg);
int xxx_print(va_list list_arg);
int u_print(va_list list_arg);
int o_print(va_list list_arg);

#endif /*_MAIN_H*/
