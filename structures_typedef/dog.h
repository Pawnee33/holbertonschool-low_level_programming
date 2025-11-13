#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/**
* struct - dog
* char - for the name of the dog
* float - for the age of the dog
* char - for the owner of the dog
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif