#include "main.h"

/**
 * _strlen - length of string
 * @s: string lengt
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
