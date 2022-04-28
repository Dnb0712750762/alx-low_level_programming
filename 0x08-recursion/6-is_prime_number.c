#include "main.h"

/**
 *is_prime_number - detects if an input number is a prime number
 *@n: input number
 *@c: iterator
 *Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime_number(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)

return (1);

else

return (0);
}
return (0 + is_prime_number(n, c + 1));
}
