#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size); 
void PrintArr(int* arr, int size); 
void SortArr(int* arr, int size); 

int main(void)
{

	int size;
	printf(">> size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size); 

	printf("-- Before sort --\n");
	PrintArr(arr, size); 

	SortArr(arr, size); 

	printf("-- After sort --\n"); 
	PrintArr(arr, size);

	free(arr); 

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

		printf("[-] arr[%zu]: %d\n",
				i,
				arr[i]);

	}

}

void SortArr(int* arr, int size)
{

	int e;
	e = 0; 

	for(size_t i = 0; i < size; i++)
	{

		// Recorremos y checamos
		for(size_t k = 0; k < size; k++)
		{

			if(arr[i] < arr[k])
			{

				e = arr[i];
				arr[i] = arr[k];
				arr[k] = e;

			}

		}

	}

}
