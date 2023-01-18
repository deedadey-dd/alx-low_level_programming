#include "funciton_poiters.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name
 * @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
