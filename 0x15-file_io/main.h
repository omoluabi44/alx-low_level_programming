#ifndef LIST
#define LIST
#include <unistd.h>
#include <stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/stat.h>
#include <fcntl.h>
/* #include<fcontl.h>  */

int main (int argc, char *argv[]);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);
int append_text_to_file(const char *filename, char *text_content);
#endif
