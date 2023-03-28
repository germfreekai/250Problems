#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size);
void PrintArr(int* arr, int size);
int* DeleteDuplicates(int* arr, int size); 

int main(void)
{

	int size;
	printf("[+] Size: ");
	scanf("%d", &size); 

	int* arr = GetArr(size); 
	PrintArr(arr, size); 

	int* res = DeleteDuplicates(arr, size);
	PrintArr(res, size); 

	free(arr); 
	free(res);

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

	printf(" < --------------- >\n"); 

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] == -1)
			return;
		
		printf("[-] arr[%zu] -> %d\n", i, arr[i]);

	}

}

int* DeleteDuplicates(int* arr, int size)
{

	int tsize;
	tsize = 0;

	for(size_t i = 0; i < size; i++)
	{

		for(size_t k = i+1; k < size; k++)
		{

			if(arr[i] == arr[k])
			{
				
				arr[k] = 0;

			}

		}

	}

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] != 0)
			tsize++;

	}

	int* res = (int*)calloc(tsize+1, sizeof(int));
	int c = 0; 

	for(size_t i = 0; i < size; i++)
	{

		if(arr[i] != 0)
		{

			res[c] = 0;
			res[c] = arr[i];
			c++;

		}

	}

	res[c] = -1;

	return res;
}
