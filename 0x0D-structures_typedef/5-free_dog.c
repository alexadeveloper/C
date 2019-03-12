#include "dog.h"
#include <stdlib.h>
/**
  *free_dog- Print structure dog
  *@d: pointer to structure dog
  *Return: null it is fail
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if ((*d).name != NULL)
		{
			free((*d).name);
		}
		if ((*d).owner != NULL)
		{
			free((*d).owner);
		}
		free(d);
	}
}
