#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * s - memory space to be filled
 * c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
 * n − This is the number of bytes to be set to the value.
 *
 * Return : Nothing
 */

void *_memset (void *s, int c, size_t n);
{
	unsigned int i ;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main (void)
{
	char buffer [98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	 printf("-------------------------------------------------\n");
	 simple_print_buffer(buffer, 98); 
	 return (0);
}

