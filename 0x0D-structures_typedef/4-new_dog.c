#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strlen - returns the length of a string
  *@s: is a char
  *Return: the length of a string
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
return (cont);
}

/**
  *new_dog - Create a new dog
  *@name: pointer name
  *@age: float of age
  *@owner: pointer owner
  *Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *copy_name, *copy_owner;
	dog_t *new;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	copy_name = name;
	copy_owner = owner;
	(*new).name = copy_name;
	(*new).age = age;
	(*new).owner = copy_owner;
return (new);
}
