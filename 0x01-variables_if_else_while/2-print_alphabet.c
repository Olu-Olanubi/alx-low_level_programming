#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: print alphabets in lower case
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
putchar(i);
putchar(10);
return (0);
}
