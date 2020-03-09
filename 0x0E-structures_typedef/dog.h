#ifndef DOG_H_
#define DOG_H_
/**
 * struct - check the code for Holberton School students.
 * @name - dog name
 * @age - age dog
 * @owner - owner dog
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

#endif
