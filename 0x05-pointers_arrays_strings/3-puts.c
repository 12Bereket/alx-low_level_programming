#include "main.h"

/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */
void _puts(char *str)
{
int i;
for(i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
