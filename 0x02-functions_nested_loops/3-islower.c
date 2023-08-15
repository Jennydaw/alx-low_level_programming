#include "main.h"

/**
 * _islower - Check for a character in lowercase
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything elase
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{	

	return (1);
	}
	return (0);
}
