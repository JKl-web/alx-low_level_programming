#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic information
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
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
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
typedef struct dog dog_t;

#endif
