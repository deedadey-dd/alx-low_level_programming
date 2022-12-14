include "main.h"
/**
 * isalpha - checks for alphabet
 * @c: this is the character
 * Return: 1 if c is an alphabet 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
