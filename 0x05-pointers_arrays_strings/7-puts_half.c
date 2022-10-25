#include "main.h"
/**
 * puts_half - prints a string, in reverse, followed by a new line
 * @str: string to print half
 */
void puts_half(char *str)
{
long i, half;
i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
half = i / 2;
else
half = (i / 2) + 1;
while (half <= i - 1)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
