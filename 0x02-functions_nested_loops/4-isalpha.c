include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: this is the character
 * Return: 1 if c is an alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
