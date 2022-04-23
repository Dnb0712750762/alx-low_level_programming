#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: an array of integers
 *@n: number of elements of an array
 *
 *Return: Nothing
 */

void reverse_array(int *a, int n)
int temp, s, e;

s = 0
e = n - 1;
/**
 *set value in array in temp
 *then place the last array in
 *the first array then place the
 *value in temp to the last array
 */

while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
