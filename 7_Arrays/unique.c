#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size); 
void PrintUnique(int* arr, int size); 

int main(void)
{

	int size; 
	printf("-> size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size); 

	PrintUnique(arr, size); 

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

void PrintUnique(int* arr, int size)
{

	int unique;
	unique = 0; 

	int c;
	c = 0; 

	for(size_t i = 0; i < size; i++)
	{

		unique = arr[i];

		for(size_t k = 0; k < size; k++)
		{

			if(unique == arr[k])
				c++;

		}

		if(c == 1)
			printf("Unique value -> arr[%zu]: %d\n", i, arr[i]);

		c = 0;

	}

}
