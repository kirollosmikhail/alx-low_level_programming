#include "main.h"

/**
* main - that a function to copy the content of a file to another one
*
* @ac: the number of the arguments to pass
* @av: that a pointer to the array of args that pass
*
* Return: return 0
*/

int main(int ac, char **av)
{
int fd, fd2, wr, rd = 1024;
char *buf = malloc(1024);

if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd = open(av[1], O_RDONLY);
if (fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP |
		S_IWGRP | S_IROTH);
if (fd2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	close(fd), exit(99);
}
while (rd == 1024)
{
	rd = read(fd, buf, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	wr = write(fd2, buf, rd);
	if (wr < rd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

}
if (close(fd) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
if (close(fd2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
return (0);
}
