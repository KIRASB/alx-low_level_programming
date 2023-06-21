#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the informations of a dog
 * @name: pointer to the dog's name
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
