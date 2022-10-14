#include <stdio.h>
/**
*main - print all possible unique and non-repeating combination of two digits
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 0;
int b = 1;
while (a <= 9)
{
while (b <= 9)
{
putchar(a + '0');
putchar(b + '0');
if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
b = a + 1;
}
putchar('\n');
return (0);
}
