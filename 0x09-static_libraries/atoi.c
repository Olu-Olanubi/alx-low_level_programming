#include "main.h"
/**
 * _atoi- converts a string to integer
 * Iterate through all characters
 * of input string and update result
 * take ASCII character of corresponding digit and
 * subtract the code from '0' to get numerical
 * value and multiply res by 10 to shuffle
 * digits left to update running total
* @s: source string
* Return: int
 */
int _atoi(char *s)
{
// Initialize result
 int res = 0;
 for (int i = 0; s[i] != '\0'; ++i)
 res = res * 10 + s[i] - '0';
 /*return result*/
    return res;
}
