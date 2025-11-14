#include "dog.h"
/**
* *new_dog - creates a new "dog"
* @d: Declared the name of the dog, given his age and his owner
* @name: for the name of the dog
* @age: for the age of the dog
* @owner: for the owner of the dog
* @new_name: for the name of the new dog
* @new_owner: for the owner of the new dog
* @len_name: for count the size of name
* @len_owner: for count the size of name
* @tmpn: for copy all character of name
* @tmpo: for copy all character of owner
* Return: d
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name;
	char *new_owner;
	int len_name = 0;
	int len_owner = 0;
	char *tmpn;
	char *tmpo;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	for (; name[len_name] != '\0'; len_name++)
	;
	new_name = malloc(sizeof(char) * (len_name + 1));

	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	tmpn = new_name;
	for (; *name != '\0'; name++, tmpn++)
	{
		*tmpn = *name;
	}
	*tmpn = '\0';

	for (; owner[len_owner] != '\0'; len_owner++)
	;
	new_owner = malloc(sizeof(char) * (len_owner + 1));

	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}

	tmpo = new_owner;
	for (; *owner != '\0'; owner++, tmpo++)
	{
		*tmpo = *owner;
	}
	*tmpo = '\0';

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;
	return (d);
}
