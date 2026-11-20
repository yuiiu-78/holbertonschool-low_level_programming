#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *name_copy;
    char *owner_copy;
    int i, name_len, owner_len;

    name_len = 0;
    owner_len = 0;

    while (name[name_len] != '\0')
        name_len++;

    while (owner[owner_len] != '\0')
        owner_len++;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    name_copy = malloc(name_len + 1);
    if (name_copy == NULL)
    {
        free(dog);
        return (NULL);
    }

    owner_copy = malloc(owner_len + 1);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }

    for (i = 0; i <= name_len; i++)
        name_copy[i] = name[i];

    for (i = 0; i <= owner_len; i++)
        owner_copy[i] = owner[i];

    dog->name = name_copy;
    dog->age = age;
    dog->owner = owner_copy;

    return (dog);
}
