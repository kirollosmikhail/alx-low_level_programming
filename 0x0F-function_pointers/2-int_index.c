/**
* int_index - return index place
* @array: an Array
* @size: size of elements in the array
* @cmp: Pointer to the function to compare values
*
* Return: Return x else return -1
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (array && cmp && size > 0)
{
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
}
return (-1);
}
