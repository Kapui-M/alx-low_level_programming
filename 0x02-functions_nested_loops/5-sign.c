#include "main.h"
/**
 * print_sign- returns boolean value
 * @n: param
 * 
 * Return:int (Success)
 */
int print_sign(int n)
{
int r;
if (n < 0)
{
r = -1;
putchar('-');
return (r);
}
else if (n>0)
{
r = 1;
putchar('+');
return (r);
}
else if (n = 0)
{
r = 0;
putchar('0');
return (r);
}
}
