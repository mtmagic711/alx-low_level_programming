#ifndef DOG_H
#define DOG_H

/**
* struct dog - defien a dog info.
* @name: the name of the dog.
* @age: thr dog's age.
* @owner: the dog's owner.
* Descripition: info about a dog.
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
