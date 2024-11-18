#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the owner's name
 */
struct dog 
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */

