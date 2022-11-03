#include "main.h"
/**
 * is_prime_number - check for a prime number
 * @n: number to be checked
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3 || n == 5)
return (1);
if (((n % 5) != 0) && (((n - 1) % 6 == 0) || ((n + 1) % 6 == 0)))
return (1);
return (0);
}
