#include "main.h"

/**
 * read_textfile -  that a function to reads a text file
 * prints it
 *
 * @filename: the thext being read
 * @letters: the number of letters
 *
 * Return: return actual number of bytes read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, wr, rd;
char *buf;

if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(letters + 1);
if (!buf)
return (0);
rd = read(fd, buf, letters);
if (rd == -1)
return (0);
buf[letters + 1] = '\0';
close(fd);
wr = write(STDOUT_FILENO, buf, rd);
if (wr == -1)
return (0);
free(buf);
return (rd);
}
