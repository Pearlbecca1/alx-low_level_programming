#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: character input
 * Return: 0;
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
