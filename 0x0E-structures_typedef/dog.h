#ifndef DOG_H
#define DOG_H

/**
* struct dog - defien a dog info.
* @name: the name of the dog.
* @age: thr dog's age.
* @owner: the dog's owner.
* Descripition: info about a dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
