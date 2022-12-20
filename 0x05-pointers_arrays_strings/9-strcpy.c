#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * @loc: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @loc
 */
char *_strcpy(char *loc, const char *src)
{
	int index = 0;

	while (src[index])
	{
		loc[index] = src[index];
		index++;
	}

	return (loc);
}
