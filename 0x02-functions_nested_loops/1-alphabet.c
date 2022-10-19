#include "main.h"
/**
 *print_alphabet - prints lowercase alphabet
 *
 *Return: void
 */
void print_alphabet(void)
{
char text = 'a';
while (text < 'z')
{
_putchar(text);
text++;
}
_putchar('\n');
}
