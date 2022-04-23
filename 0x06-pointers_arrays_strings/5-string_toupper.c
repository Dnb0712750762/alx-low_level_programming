#include "main.h"
/**
 *string_toupper - changes lowercase to uppercase
 *@s: pointer to input char
 *
 *Return: @s
 */

char *string_topper(char *str)
{
int i;

i = 0;

while (str[i] != '\0')
{
if (str[i] >=97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}