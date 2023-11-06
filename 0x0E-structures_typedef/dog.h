#ifndef MAIN_DOG_H
#define MAIN_DOG_H

/**
 * struct dog - This will returns a string
 * @name: This will is the output of dog name
 * @age: This will is the output of dog age
 * @owner: This will is the output of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
