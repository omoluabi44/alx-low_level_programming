#ifndef _FUNC
#define _FUNC
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
#endif
