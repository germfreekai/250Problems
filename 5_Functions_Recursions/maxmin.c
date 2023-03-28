#include <stdio.h>
#include <stdlib.h>

typedef struct
{

	int max;
	int min;

}Res;

void GetMinMax(int* arr, int size, int n, Res* res);
int* GetArr(int size); 

int main(void)
{

	Res* res = (Res*)malloc(sizeof(Res));
	res->max = 0;
	res->min = 0;

	int size;
	printf("Give me arr size: ");
	scanf("%d", &size); 

	int* arr = GetArr(size);

	res->max = arr[0];
	res->min = arr[0];

	GetMinMax(arr, size, 0, res);

	printf("Max: %d || Min: %d\n",
			res->max,
			res->min);

	free(res); 
	free(arr); 

	return EXIT_SUCCESS;

}

int* GetArr(int size)
{

	
	int* arr = (int*)calloc(size, sizeof(int));

	for(size_t i = 0; i < size; i++)
	{

		arr[i] = 0;
		printf("%zu: ", i);
		scanf("%d", &arr[i]);

	}

	return arr;
}

void GetMinMax(int* arr, int size, int n, Res* res)
{

	if(size-1 == n)
	{
		if(arr[n] > res->max)
			res->max = arr[n];
		if(arr[n] < res->min)
			res->min = arr[n];

		return;

	}

	if(arr[n] > res->max)
		res->max = arr[n];
	if(arr[n] < res->min)
		res->min = arr[n];

	return GetMinMax(arr, size, n+1, res);

}
