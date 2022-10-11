#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - information about a dog
 *
 * @name: first member
 * @owner: second member
 * @age: third member
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
