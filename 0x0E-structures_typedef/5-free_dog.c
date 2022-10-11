#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - functiomn that frees dogs of type struct
 * @d: the variable of type struct to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
