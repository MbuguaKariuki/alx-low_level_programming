#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to be filled
 *@b: char to copy
 *@n; number of times to copy b
*Return: pointer to the area memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0;i < n; i++)
	{
		s[i] = b;
	}
	return (s);
