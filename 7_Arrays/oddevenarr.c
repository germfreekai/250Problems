#include <stdio.h>
#include <stdlib.h>

typedef struct
{

	int* even; 
	int seven;
	int* odd;
	int sodd;

}Results;

int* GetArr(int size); 
void SplitArr(Results* res, int* arr, int size); 
void PrintArr(int* arr, int size); 
int CountEvenOdd(int* arr, int size, int option); 

int main(void)
{

	int size; 
	printf("> Size: "); 
	scanf("%d", &size); 

	printf(" <---- ARR ---->\n"); 
	int* arr = GetArr(size);
	PrintArr(arr, size);

	Results* res = (Results*)malloc(sizeof(Results)); 

	SplitArr(res, arr, size); 

	printf(" <---- EVEN ---->\n"); 
	PrintArr(res->even, res->seven);
	
	printf(" <---- ODD ---->\n"); 
	PrintArr(res->odd, res->sodd);

	free(arr);
	free(res->even);
	free(res->odd); 
	free(res); 

	return EXIT_SUCCESS;

}

int* GetArr(int size)
{

	int* arr = (int*)calloc(size, sizeof(int)); 

	for(size_t i = 0; i < size; i++)
	{

		arr[i] = 0; 
		printf("> ARR[%zu]: ", i); 
		fflush(stdout); 
		scanf("%d", &arr[i]); 

	}

	return arr; 

}

void PrintArr(int* arr, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		printf("--> ARR[%zu]: %d\n", i, arr[i]); 

	}

}
void SplitArr(Results* res, int* arr, int size)
{

	int seven = CountEvenOdd(arr, size, 0);
	int sodd = CountEvenOdd(arr, size, 1);

	res->even = (int*)calloc(seven, sizeof(int));
	res->odd = (int*)calloc(sodd, sizeof(int)); 

	res->seven = seven;
	res->sodd = sodd;

	int ce;
	ce = 0; 
	int co; 
	co = 0; 

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] % 2 == 0)
		{

			res->even[ce] = arr[i];
			ce++;

		}
		else
		{

			res->odd[co] = arr[i];
			co++;

		}

	}

}

int CountEvenOdd(int* arr, int size, int option)
{

	int even; 
	even = 0; 
	int odd; 
	odd = 0; 

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] % 2 == 0)
		{

			even++;

		}
		else
		{

			odd++;

		}

	}

	return option == 0 ? even : odd;

}
