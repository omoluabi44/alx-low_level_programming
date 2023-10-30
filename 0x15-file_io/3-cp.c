#include "main.h"
/**
 * error - check if a file is opened  and handle errors
 *file_from: initial file to copy from
 *file_to: file destination
 *Return: nothing
 */

void error (int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, Error: "Can't read from file %S\n", argv[1])
			exit(98);
	}
	if (file_to == -1)
        {
                dprintf(STDERR_FILENO, Error: "Can't write to file %S\n", argv[2])			error(99);
        }
}

/**
 * main - copy content of a file from one to another
 *@argc: arguement count
 *@argv: arguement paramter
 Return: 0 on success
*/
int main (int argc, char *argv[])
{
	int file_from, file_to, error_c;
	ssize_t nchars, nw;
	char buf[1024];

	if (argc != 3)
	{
		drprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = openn(argv[1], O_RDONLY);
	file_to = open(argv[2],O-CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	erro(file_from, file_to,argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchar = read(file_from, buf, 1024);
		if (nchars == -1)
			error(-1, 0, argv);
		nw = write(file_to, buf, nchar)
			error(0, -1,argv);
	}
