#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function
 *
 * @str: param
 *Return: always success
 */
void puts2(char *str)
{int i;
int j;
j = strlen(str);
for (i = 0; i < j; i++)
{
if ((i % 2) == 0)
{
printf("%c", str[i]);
}
}
printf("\n");
return;
}
