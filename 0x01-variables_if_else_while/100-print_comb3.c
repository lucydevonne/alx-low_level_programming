#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Write a program that prints all possible
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	
	for (x=48; y<=57 ; x++)
	{
		for ( y= x+1; y<=57; y++)

		putchar (x);
		putchar (y);

		if (x==56 && y==57)
		{
			putchar ('\n');
			break;
		}
		
		putchar (',');
		putchar (' ');
	}
	
	return (0);
}
