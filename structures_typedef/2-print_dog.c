#include "dog.h"
/**
* print_dog - Function that prints a "struct dog"
* @d: Is point to my element to prints
* @name: for the name of the dog
* @age: for the age of the dog
* @owner: for the owner of the dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: (nil)%.6f\n", d->age);
		printf("Owner: (nil)%s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
