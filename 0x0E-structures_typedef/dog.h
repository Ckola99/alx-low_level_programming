#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Details for a dog
 * @name: Name of the dog as a string
 * @age: Age of the dog as a float
 * @owner: Name of the owner as a string
 *
 */

struct dog {
  char* name;
  float age;
  char* owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
