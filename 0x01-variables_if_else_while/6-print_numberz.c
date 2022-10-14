#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: print single digit numbers using putchar only
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
