#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
* struct dog_t - Name of the structure
* @name: for the name of the dog
* @age: for the age of the dog
* @owner: for the owner of the dog
*/
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
