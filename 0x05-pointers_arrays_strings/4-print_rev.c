#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - strlen function
 * @s : param
 * Return: void
 */
void print_rev(char *s)
{
int i;
int j;
char c;
j = strlen(s);
j--;
for (i = j; i >= 0; i--)
{
c = s[i];
printf("%c", c);
j--;
}
printf("\n");
return;
}
