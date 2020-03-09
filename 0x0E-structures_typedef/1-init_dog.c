#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Structure
 * @name: Name 
 * @age: Age
 * @owner: Owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	d -> name = name;
	d -> age = age;
	d -> owner = owner;

}
