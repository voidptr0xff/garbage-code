#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a structure.
 *
 *@name: name of the dog.
 *
 *@age: age of the dog.
 *
 *@owner: refers to the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*--DOG_H--*/
