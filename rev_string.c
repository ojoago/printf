#include "holberton.h"
/**
 * rev_string - reverse string passed in
 * @s: string passed as argument
 *
 * Return: the reversed string
 */
void *rev_string(char *s)

{
int i = 0;
int aux = 0;
char ltemp;

while (*(s + i) != '\0')
i += 1;
i -= 1;

while (aux < i)
{
ltemp = s[i];
s[i] = s[aux];
s[aux] = ltemp;
aux++;
i--;
}
return (s);
}
