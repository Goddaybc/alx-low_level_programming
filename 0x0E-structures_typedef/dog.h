#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog - struct dog
 * @name: attribute pointer to a char names dog
 * @age: attributes float age's dog
 * @owner: attribute pointer to char owners dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, floatage, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
