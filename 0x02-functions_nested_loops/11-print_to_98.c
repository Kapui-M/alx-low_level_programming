#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - sum function
 *@n: param to be added
 *Return:int (Success)
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
{
break;
}
printf(",");
putchar(' ');
}
printf("\n");
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i == 98)
{
break;
}
printf(",");
putchar(' ');
}
printf("\n");
}
}
