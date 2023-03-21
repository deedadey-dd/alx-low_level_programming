#include "main.h"

/**
 * *_strcat - concatenates 2 strings
 * @src: string to be added
 * @dest: string to be added to
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[i++])
		dl++;
	for (i = 0; src[i]; i++)
		dest[dl++] = src[i];
	return (dest);
}
