#include "main.h"
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (strCompare(s, (s + len - 1)));
}
/**
 * strCompare - compares the first and last indices for match
 * @first: index starting from left of string
 * @last: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */
int strCompare(char *first, char *last)
{
if (first >= last)
return (1);
if (*first == *last)
return (strCompare(first + 1, last - 1));
return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be determined
 * Return: int
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
