#include <unistd.h>

/**
 * _putchar - writes the character to the stdout
 *@c: The character to print
 *
 *Return: on success 1'
 * on error, -1 is returned, and error is then returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
