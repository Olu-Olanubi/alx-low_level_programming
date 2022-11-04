/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
int i;
if (argc > 0)
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
