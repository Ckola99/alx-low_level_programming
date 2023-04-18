#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#define NULL_VALUE "(nil)"

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }

    printf("Name: %s\n", d->name ? d->name : NULL_VALUE);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : NULL_VALUE);
}
