#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}
dog;
	/**
	 * dog_t - Typedef for struct dog
	 */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
