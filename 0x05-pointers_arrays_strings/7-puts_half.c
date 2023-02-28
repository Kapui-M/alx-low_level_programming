#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - function
 * @str: param
 *
 * Return: success
 */
void puts_half(char *str)
{
int i;
int j;
int k;
int l;
j = (strlen(str)-1);
 k = (j / 2) + 1;
l = j % 2; 
if (l == 1)
{   
for (i = k; i <= j; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
return;
}
