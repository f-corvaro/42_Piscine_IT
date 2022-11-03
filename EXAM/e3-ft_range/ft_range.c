#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *array;
	int i;

	if (start >= end)
		return (NULL);
	array = (int*)malloc(sizeof(int) * (end - start));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		array[i] = start;
		start++;
		i++;
	}
	return (array);
}
