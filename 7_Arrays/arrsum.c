#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size); 
int SumArr(int* arr, int size); 

int main(void)
{

	int size; 
	printf("Size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size); 

	printf("\n> ");

	for(size_t i = 0; i < size-1; i++)
	{

		printf("%d + ", arr[i]);

	}

	printf("%d = %d\n", arr[size-1], SumArr(arr, size));

	free(arr); 

	return EXIT_SUCCESS; 

}

int* GetArr(int size)
{

	int* arr = (int*)calloc(size, sizeof(int)); 

	for(size_t i = 0; i < size; i++)
	{

		arr[i] = 0; 
		printf("arr[%zu]: ", i);
		fflush(stdout); 
		scanf("%d", &arr[i]); 

	}

	return arr; 

}

int SumArr(int* arr, int size)
{

	int res; 
	res = 0; 

	for(size_t i = 0; i < size; i++)
	{

		res = res + arr[i];

	}

	return res; 

}
