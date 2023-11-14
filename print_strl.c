#include "main.h"

/**
 * _strlen - length of the string
 * @str: string to be printed
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strlenc - length of the string
 * @str: string to be printed
 * Return: length
 */

int _strlenc(const char *str)
{
	int length;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
