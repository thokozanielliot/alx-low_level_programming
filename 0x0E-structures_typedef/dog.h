#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - contains dogs name, age and the owner name
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure that will hold different dogs
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
