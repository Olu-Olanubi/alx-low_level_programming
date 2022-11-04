#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of arguments it receives
 * @argc: argument counter
 * @argv: pointer to array of arguments with numbers to multiply included
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
/*If one of the number contains symbols that are not digits, print Error and return 1*/
if (*argv[i] < '0' || *argv[i] > '9')
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
