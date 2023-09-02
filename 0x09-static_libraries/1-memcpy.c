#include "main.h"
/**
 * _memcpy - function which copies memory area
 * @dest: destination of memory area
 * @src: memory area source
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
