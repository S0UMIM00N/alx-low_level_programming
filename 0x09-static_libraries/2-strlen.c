#include "main.h"

/**
 * _strlen - length of the string
 * owned by soumimoon
 * @s: argument
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
