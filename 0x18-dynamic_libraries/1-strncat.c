#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @src: THe source value
 * @n: The limit of the concatenation
 * @dest: The destination or final result
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
