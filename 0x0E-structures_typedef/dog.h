#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - new type struct dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
