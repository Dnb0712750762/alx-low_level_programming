#include "main.h"

/**
 *_strstr - locates a substring
 *@hasytack: the string to search
 *@needle: the string to find
 *
 *Return: char value
 */
char *_strstr(char *haystack, char *neeedle)
{
int a = 0, b = 0;

while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}

if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}

return ('\0');
}
