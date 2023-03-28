#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int Max(int* arr);

int main(int argc, char* argv[argc+1])
{

	assert(argc == 4 && "Just 3 numbers needed");

	int* arr = (int*)calloc(3, sizeof(int));

	for(size_t i = 1; i < argc; i++)
	{

		arr[i-1] = atoi(argv[i]);

	}

	printf("Max number of: %d, %d, %d is: %d\n",
			arr[0],
			arr[1],
			arr[2],
			Max(arr));

	free(arr); 

	return EXIT_SUCCESS;

}

int Max(int* arr)
{

	int max;
	max = arr[0];

	for(size_t i = 0; i < 3; i++)
	{

		if(arr[i] >= max)
			max = arr[i];

	}

	return max;

}
