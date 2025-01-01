#include <assert.h>

#include "search.h"

#define LEN(A) (sizeof (A) / sizeof (A)[0])

int
main(void)
{
	int arr[] = {1, 2, 3, 4, 5};

	assert(*linear_search(arr, LEN(arr), 4) == 4);

	return 0;
}
