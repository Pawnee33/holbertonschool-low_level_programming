#include "dog.h"
/**
* init_dog - Initialize my variable of type "struct dog"
* @d: Declared the name of the dog, given his age and his owner
* @name: for the name of the dog
* @age: for the age of the dog
* @owner: for the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
