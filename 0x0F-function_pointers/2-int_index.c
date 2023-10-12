/**
 *int_index - function array that search for int
 *@array: param
 *@size: size of the array
 *@cmp: function pionter
 *Return: i if index is not equal to 0,otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
