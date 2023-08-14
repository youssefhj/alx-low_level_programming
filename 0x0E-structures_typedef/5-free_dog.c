#include "main.h"
#include <stdlib.h>

/**
 * free_dog - free dog structure
 *
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if(d->owner)
			free(d->owner);
		free(d);
	}
}
