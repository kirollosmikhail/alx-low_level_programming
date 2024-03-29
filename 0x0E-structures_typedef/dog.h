#ifndef dog_h
#define dog_h

/**
 * struct dog - Description of dog.
 * @name: dog's name.
 * @owner: Owner name.
 * @age:  dog age.
 *
 * Description: Name, owner and age
*/

struct dog
{
float age;
char *name, *owner;

};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
