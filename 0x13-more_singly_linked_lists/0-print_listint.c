#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer to the first node of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t n = 0;

	temp == h;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
