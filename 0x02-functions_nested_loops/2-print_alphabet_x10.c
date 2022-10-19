#include "main.h"
/**
 *print_alphabet_x10 - prints lowercase alphabet ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char text = 'a';
while (text <= 'z')
{
_putchar(text);
text++;
}
_putchar('\n');
i++;
}
}
