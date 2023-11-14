#include "main.h"

/**
 * _strlen - prints length of the string
 * @str: string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strlenc - prints length of the string
 * @str: string
 * Return: lenth of the string
 */

int _strlenc(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
