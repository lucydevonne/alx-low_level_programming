#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 * malloc_checked - allocates memory using malloc and exit if failed
 *
 * @b: int
 *
 * Return: pointer to the array initialized or NULL
 *
 */

void *malloc_checked(unsigned int b)
{
		void *p ;

		p = malloc(b);

		if (p == NULL)
			exit(98);

		return (p);
}
