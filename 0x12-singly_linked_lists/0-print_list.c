#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: the number of nodes
 */
void main() 
{
    struct node *first;
    int n ;
    first = create (n);
    printf(first);
}

void print (struct node *p)
{
    while (p! = NULL)
    {
        printf("%d", p->data);
        p=p->next;
    }
}
