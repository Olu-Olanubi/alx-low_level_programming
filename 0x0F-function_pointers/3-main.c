#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function,
 * user should give two integers and an operator
 * main will calculate the basic math via a function pointer.
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
int num_1, num_2;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
f = get_op_func(argv[2]);
if (f == NULL || (argv[2][1] != '\0'))
{
printf("Error\n");
exit(99);
}
num_1 = atoi(argv[1]);
num_2 = atoi(argv[3]);
if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
{
printf("Error\n");
exit(100);
}
printf("%d\n", f(num_1, num_2));
return (0);
}
