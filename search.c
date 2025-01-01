#include "search.h"

int *
linear_search(const int *arr, size_t len, int key)
{
	for (size_t i = 0; i != len; i++)
		if (arr[i] == key)
			return (int *)arr + i;
	return NULL;
}
