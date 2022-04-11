#ifndef DOG_H
#define DOG_H

/**
 * struct dog - countain info of a dog
 * @name: pointer to name of dog
 * @age: age
 * @owner: pointer to string owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
