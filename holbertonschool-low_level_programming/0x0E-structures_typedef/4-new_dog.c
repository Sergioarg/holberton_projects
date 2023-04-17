#include <stdlib.h>
#include "dog.h"
/**
 * _strcopy - copy
 * @s: char s
 * Return: 0
 */
char *_strcopy(char *s)
{
	int length = 0, i;
	char *m_name;

	while (s[length] != '\0')
		length = length + 1;

	/* we obtain the length plus the null */

	m_name = malloc(sizeof(char) * length + 1);

	if (m_name == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
		m_name[i] = s[i]; /* We copy value for value */
	m_name[i] = '\0';

	return (m_name);

}

/**
 * new_dog - new doggy
 * @name: name dog
 * @age: age
 * @owner: char s
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*1. Create a new dog */
	char *m_name, *m_owner;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	m_name = _strcopy(name);
	if (m_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	m_owner = _strcopy(owner);

	if (m_owner == NULL)
	{
		free(new_dog);
		free(m_name);
		return (NULL);
	}

	new_dog->owner = m_owner; /* We passed the copy. */
	new_dog->name = m_name;

	new_dog->age = age;

	return (new_dog);
}
