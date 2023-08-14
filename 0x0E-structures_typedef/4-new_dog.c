#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of str
 *
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0 ; str[len] != '\0' ; len++)
		;

	return (len);
}

/**
 * _strcpy - copy src to dest
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to a char
 */
char* _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name  || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = (char *)malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}


	dog->owner = (char *)malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->owner =_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
