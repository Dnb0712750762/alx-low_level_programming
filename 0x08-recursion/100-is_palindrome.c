#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string
 *Return: the length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')

return (0);

else

return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - detects if a string is a palindrome
 *@s: string
 *Return: 1 if s is a palindrome, 0 if not
 */

int _is_palindrome(char *s)
{
if (*s == '\0')

return (1);

return (comparator(s, 0, _strlen_recursion(s) - 1));
}
