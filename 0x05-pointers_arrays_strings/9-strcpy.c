#include "main.h"

/**
 * _strcpy - copies string pointed by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: str to be copied
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{

	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
