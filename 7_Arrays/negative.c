#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size); 
void PrintNegative(int* arr, int size); 

int main(void)
{

	int size;
	printf("Size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size); 

	printf(" -- Negative values --\n"); 

	PrintNegative(arr, size); 

	free(arr);

	return EXIT_SUCCESS;

}

int* GetArr(int size)
{

	int* arr = (int*)calloc(size, sizeof(int)); 

	for(size_t i = 0; i < size; i++)
	{

		arr[i] = 0; 
		printf("Arr[%zu]: ", i); 
		fflush(stdout); 
		scanf("%d", &arr[i]); 

	}

	return arr; 

}

void PrintNegative(int* arr, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] < 0)
		{

			printf("arr[%zu]: %d\n", i, arr[i]); 

		}

	}

}
