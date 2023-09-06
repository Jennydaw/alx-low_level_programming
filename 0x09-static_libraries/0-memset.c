#include "main.h"
/**
 * _memset - Program fills a block of memory with a specific value
 * @s: fill memory starting address
 * @b: the desired value
 * @n: change number of bytes
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;

for (; n > 0; a++)
{
s[a] = b;
n--;
}
	return (s);
}
