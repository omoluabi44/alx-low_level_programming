#include "monty.h"
/**
 * valid_argument - check if user enter two arguement
 *@argc: the argument length
 */
void valid_argument(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE:  monty file\n");
	exit(EXIT_FAILURE);
}
