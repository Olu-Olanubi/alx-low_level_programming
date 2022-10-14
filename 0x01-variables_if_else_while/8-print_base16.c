#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: print all the numbers of base 16
*
* Return: Always 0 (Success)
*/
int main(void)
{
char i = 0;
while (i < 16)
{
if (i > 9)
putchar(i - 10 + 'a');
else
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
