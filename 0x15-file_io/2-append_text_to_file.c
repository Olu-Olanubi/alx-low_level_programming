#include "main.h"
/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: content to append
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int written;
if (!filename)
return (-1);
/* Try to open the file */
fd = open(filename, O_WRONLY | O_APPEND);
/*If file doesn't exist, return error*/
if (fd == -1)
return (-1);
/* if nothing to write, close and return success */
if (!text_content)
{
close(fd);
return (1);
}
/* write */
written = write(fd, text_content, _strlen(text_content));
if (written == -1 || written != _strlen(text_content))
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
