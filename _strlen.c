#include "main.h"
/**
 * _strlen - helper function
 * @s: character pointer;
 * Return: length of the string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}
