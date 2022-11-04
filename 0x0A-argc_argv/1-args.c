/**
 * main - print the number of arguments parsed into main
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
