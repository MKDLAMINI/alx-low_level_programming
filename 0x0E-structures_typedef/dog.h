#ifndef MAIN_DOG_H
#define MAIN_DOG_H

/**
 * struct dog - This will returns a string
 * @name: This will is the output of dog name
 * @age: This will is the output of dog age
 * @owner: This will is the output of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
