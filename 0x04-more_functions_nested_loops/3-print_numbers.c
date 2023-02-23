#include "main.h"
/**
 * print_numbers - multiplies two int
 * @a: value one
 * @b: value two
 *
 * Return:int (Success)
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
putchar('\n');
}
