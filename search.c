#include "search.h"

int *
linear_search(const int *arr, size_t len, int key)
{
	for (size_t i = 0; i != len; i++)
		if (arr[i] == key)
			return (int *)arr + i;
	return NULL;
}

int *
binary_search(const int *arr, size_t len, int key)
{
	size_t left = 0, right = len;

	while (left != right) {
		size_t middle = (left + right) / 2;

		if (arr[middle] > key)
			right = middle;
		else if (arr[middle] < key)
			left = middle + 1;
		else
			return (int *)arr + middle;
	}
	return NULL;
}
