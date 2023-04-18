#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Details for a dog
 * @name: Name of the dog as a string
 * @age: Age of the dog as a float
 * @owner: Name of the owner as a string
 *
 * Description: Contains details for a dog
 */

struct dog {
  char* name;
  float age;
  char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
