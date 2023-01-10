#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source of string
 * @n: no. of bytes to copy
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int dl = 0;

	while (src[i++])
		dl++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = dl; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
