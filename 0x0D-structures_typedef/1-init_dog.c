#include "dog.h"

/**
  *init_dog- Initialize a variable of type dog
  *@d: pointer to structure dog
  *@name: pointer name
  *@age: float of age
  *@owner: pointer owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
