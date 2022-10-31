#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to be printed
 * Return: 1 on success
 * On error, -1 is return, and error is settled
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
