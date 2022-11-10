#include <stdlib.h>
#include "main.h"
/**
* strtow - splits a string into words
* @str: string to be split
* Return: pointer to 2D array
*/
char **strtow(char *str)
{
int i, n, words, word_count, spaces;
char **grid;
if (str == NULL)
return (NULL);
i = 0;
word_count = 0;
spaces = 0;
/*count number of spaces in str*/
while (str[i] != '\0')
{
/**ensure any spaces before first word is not counted
 * Count only spaces betwwen words
*/
if (str[i] != ' ' && str[i] != '\t')
word_count++;
if ((str[i] == ' ' || str[i] == '\t') && !((str[i+1] == ' ') || (str[i + 1] == '\t') || (str[i + 1] == '\0')) && (word_count > 0))
{
spaces++;
}
i++;
}
/*I there are no spaces return NULL*/
if (spaces == 0)
return (NULL);
/*allocate memory for array of words*/
grid = malloc((spaces + 2) *sizeof(char *));
/* validate memory */
if (grid == NULL)
return (NULL);
/*Reset variable i to 0*/
i = 0;
/*allocate memory for characters of each word*/
for (words = 0; words <= spaces; words++)
{
word_count = 0;
/*iterate through string again*/
while (str[i] != '\0')
{
if (str[i] != ' ' && str[i] != '\t')
{
word_count++;
}
if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' ' || str[i + 1] != '\t' || str[i + 1] == '\0') && (word_count > 0))
{
/*Create an column array for each full word*/
grid[words] = malloc((word_count + 1) *sizeof(int));
/* validate memory created*/
if (grid[words] == NULL)
{
for (words = 0; words < (spaces + 2); words++)
free(grid[words]);
free(grid);
return (NULL);
}
/*Populate the array with the words*/
for (n = 0; n < word_count; n++)
{
grid[words][n] = str[i - word_count + n];
}
/*Close the array and re-start iteration for the next word*/
grid[words][n] = '\0';
i++;
break;
}
/*Increment loop if character array isn't created*/
i++;   
}
}
/*Close the grid word array and return*/
grid[words] = '\0';
return (grid);
}
