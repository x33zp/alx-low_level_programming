#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - A function that calculates the length of a string.
 * @str: string to be calculated
 * Return: Always 0.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - A function that copies a string.
 * @dest: destination of copied string
 * @src: string to be copied
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
