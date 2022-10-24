#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node node structure
 */
typedef struct linkint_s
{
	int n;
	struct linkint_s *next;
}listint_t;

size_t printlistint(const listint_t *h);

#endif
