#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size);
void PrintArr(int* arr, int size); 
void ArrayCopy(int* arr, int* arrcpy, int size);

int main(void)
{

	int size; 
	printf("-> size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size);

	printf("-- ARR --\n");
	PrintArr(arr, size); 

	int* arrcpy = (int*)calloc(size, sizeof(int)); 

	ArrayCopy(arr, arrcpy, size);

	printf("-- ARRCOPY --\n");
	PrintArr(arrcpy, size);

	free(arr); 
	free(arrcpy);

	return EXIT_SUCCESS;

}

int* GetArr(int size)
{

	int* arr = (int*)calloc(size, sizeof(int));

	for(size_t i = 0; i < size; i++)
	{

		arr[i] = 0; 
		printf("[+] arr[%zu]: ", i);
		fflush(stdout);
		scanf("%d", &arr[i]);

	}

	return arr;

}

void PrintArr(int* arr, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		printf("[-] arr[%zu]: %d\n", i, arr[i]);

	}

}

void ArrayCopy(int* arr, int* arrcpy, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		arrcpy[i] = arr[i];

	}

}
