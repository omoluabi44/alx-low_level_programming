#ifndef MAIN_H
#define MAIH_H
int main(int argc, char *argv[]);

void errors();
int is_digit (char *dig);
int _strlen(char *length);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int _putchar(char c);
#endif
