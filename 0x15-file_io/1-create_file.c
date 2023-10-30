#include "main.h"
/**
 *create_file - create and write into a file
 *@filename: the file to be created
 *@text_content: the content to be copied into the file
 *Return: 1 if successfull or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;
	int letterN;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letterN = 0; text_content[letterN]; letterN++)
		;
	nwrite = write(fd, text_content, letterN);

	if (nwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
