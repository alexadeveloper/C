#ifndef __DOG__H
#define __DOG__H

/**
  * struct dog - struct for the object in c
  * @name: pointer
  * @age: float
  * @owner: char*
  *
  * Description: Struct of my dog in c
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
