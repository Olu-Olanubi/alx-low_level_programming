#include "main.h"
/**
 * findRoot - checks integer as candidate for square root
 * @num: square integer
 * @x: integer
 * Return: 1 if
 */
int findRoot(int num, int x)
{
if (x * x == num)
return (x);
else if (x > num / x)
return (findRoot(num, x - 1));
else if (x < num / x)
return (findRoot(num, x + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */
int _sqrt_recursion(int n)
{
int a;
a = 1;
if (n < 0)
return (-1);
else if (n == 1)
return (1);
else
return (findRoot(n, a));
}
