#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size);
void PrintArr(int* arr, int size); 
void CountElements(int* arr, int size);
int Exist(int* arr, int n, int size); 

int main(void)
{

	int size; 
	printf("-> size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size);

	printf("-- ARR --\n");
	PrintArr(arr, size); 

	CountElements(arr, size); 

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

		printf("[-] arr[%zu]: %d\n", i, arr[i]);

	}

}

int Exist(int* arr, int n, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] == n)
			return 1;

	}

	return 0;

}

void CountElements(int* arr, int size)
{

	int c; 
	c = 0; 

	int* temp = (int*)calloc(size, sizeof(int));
	int idx;
	idx = 0;

	for(size_t i = 0; i < size; i++)
	{

		if(!Exist(temp, arr[i], idx))
		{

			temp[idx] = 0;
			temp[idx] = arr[i];
			// printf("Temp[%d]: %d || Arr[%zu]: %d\n", idx, temp[idx], i, arr[i]);

			for(size_t k = i; k < size; k++)
			{
				
				if(temp[idx] == arr[k])
					c++;

			}

			printf("Element: %d found %d times\n", temp[idx], c);

			idx++;
			c = 0; 

		}
		
	}

	free(temp);
}
