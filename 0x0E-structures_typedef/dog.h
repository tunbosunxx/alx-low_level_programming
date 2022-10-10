#ifndef DOG_H_
#define DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * struct dog - Define a new struct dog with name, age, owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 **/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;


#endif /* DOG_H_ */
