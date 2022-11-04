#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: pointer to array of arguments with numbers to multiply included
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
/*Ensure that two numbers were parsed into the program*/
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
/*Multiply the two numbers parsed*/
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
