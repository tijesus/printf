#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/** format - format sturct
 * @lett: format iddentifier
 * @func: functions pointer
 */

typedef struct format
{
	char *lett;
	int (*func)(va_list);
}check;

int _printf(const char *format, ...);
int char_print(va_list char_arg);
int str_print(va_list char_arg);
int per_print(va_list char_arg);


#endif
