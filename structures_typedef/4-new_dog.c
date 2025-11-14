#include "dog.h"
/**
* _strlen - Function that return length of a string
*@s: string to count the length
* Return: the length
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
* *_strcpy - Copy a string
* @dest: Destinantion of the string
* @src: Source of the string
* Return: Destination of the copy of the string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
* *new_dog - creates a new "dog"
* @name: for the name of the dog
* @age: for the age of the dog
* @owner: for the owner of the dog
* Return: d
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
	return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	d->name = malloc(sizeof(char) * (len_name + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len_owner + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
