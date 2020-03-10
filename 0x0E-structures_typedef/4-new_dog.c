#include "dog.h"

/**
 * new_dog - Function that creates a new dog.
 * @name: Dog name
 * @age: Age
 * @owner: owner
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *namecop;
	char *ownercop;
	int sizenam, sizeown, cont1, cont2;

	for (sizenam = 0; name[sizenam] ; sizenam++)
	{}
	sizenam++;
	for (sizeown = 0; owner[sizeown] ; sizeown++)
	{}
	sizeown++;

	namecop = malloc(sizenam);
	if (namecop == NULL)
	{
		free(namecop);
		return (NULL);
	}
	ownercop = malloc(sizeown);
	if (ownercop == NULL)
	{
		free(ownercop);
		return (NULL);
	}
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(namecop);
		free(ownercop);
		return (NULL);
	}
	for (cont1 = 0 ; cont1 <= sizenam ; cont1++)
		namecop[cont1] = name[cont1];
	for (cont2 = 0 ; cont2 <= sizeown ; cont2++)
		ownercop[cont2] = owner[cont2];
	p->name = namecop;
	p->age = age;
	p->owner = ownercop;
	return (p);
}
