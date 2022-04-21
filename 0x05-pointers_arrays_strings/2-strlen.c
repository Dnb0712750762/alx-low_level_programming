#include "main.h"

/**
 *_strlen - Must return length of a string
 *@s: A pointer to an int
 *Return: void Which means code is successful
 */

int _strlen(char *s)
{

int string_length = 0;

while (s[string_length])
{
string_length++;

}
return (string_length);
}
