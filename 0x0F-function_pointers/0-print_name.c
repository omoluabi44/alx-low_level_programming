/**
 * print_name - function to pointers that call function
 *@name: value passed
 *@f: piointer
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	f(name);
}
