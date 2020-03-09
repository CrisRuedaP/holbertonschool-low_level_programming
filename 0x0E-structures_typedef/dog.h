#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: always 0.
 */
struct dog
{
char *name;
float age;
char *owner;

};

typedef struct dog mydog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
