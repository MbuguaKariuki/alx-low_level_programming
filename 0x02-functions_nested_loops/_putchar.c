#include<unistd.h>

/**
 * _putchar - prints the character c to stdout
 * Return: on success 1
 * on error, -1 is returned, and errorno set appropriately
 */

int putchar(char c)

{
	return (write(1, &c, 1));
}
