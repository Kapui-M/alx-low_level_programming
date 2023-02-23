#include "main.h"
/**
 * print_most_numbers - multiplies
 * @a: value one
 * @b: value two
 *
 * Return:int (Success)
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
{
continue;
}
putchar('0'+i);
}
putchar('\n');
}
