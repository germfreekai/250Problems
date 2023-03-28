#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size); 
void InsertElem(int* arr, int size); 
void PrintArr(int* arr, int size); 

int main(void)
{

	int size; 
	printf("[+] size: "); 
	scanf("%d", &size); 

	int* arr = GetArr(size); 

	printf("-- Original --\n");
	PrintArr(arr, size); 

	InsertElem(arr, size); 

	printf("-- Modified --\n"); 
	PrintArr(arr, size); 

	free(arr); 

	return EXIT_SUCCESS; 

}

void PrintArr(int* arr, int size)
{

	for(size_t i = 0; i < size; i++)
	{

		printf("[-] arr[%zu]: %d\n", i, arr[i]);

	}

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

void InsertElem(int* arr, int size)
{

	int val;
	printf("[+] Val: "); 
	scanf("%d", &val);

	int pos;
	printf("[+] Pos: "); 
	scanf("%d", &pos);

	if( (pos < 0) || (pos > size-1) )
	{

		fprintf(stderr, "Invalid position\n"); 
		exit(2); 

	}
	else
	{

		arr[pos] = val;

	}

}
