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
	unsigned int tam_name, tam_owner, i;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	tam_name = _strlen(name);
	copy_name = malloc(sizeof(char) * (tam_name + 1));
	if (copy_name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < tam_name; i++)
	{
		copy_name[i] = name[i];
	}
	copy_name[i] = '\0';
	tam_owner = _strlen(owner);
	copy_owner = malloc(sizeof(char) * (tam_owner + 1));
	if (copy_owner == NULL)
	{
		free(new);
		return (NULL);
	}
	copy_owner = owner;
	(*new).name = copy_name;
	(*new).age = age;
	(*new).owner = copy_owner;
return (new);
}
