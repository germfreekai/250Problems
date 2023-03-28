#include <stdio.h>
#include <stdlib.h>

int* GetArr(int size);
void PrintArr(int* arr, int size); 
int* MergeSortArr(int* arrL, int* arrR, int sizeL, int sizeR);
void Sort(int* arr, int size); 

int main(void)
{

	int sizeL;
	int sizeR;

	printf(" < ---- arrL ---- > \n");
	printf("[+] sizeL: "); 
	scanf("%d", &sizeL); 
	int* arrL = GetArr(sizeL);
	
	printf(" < ---- arrR ---- > \n");
	printf("[+] sizeR: "); 
	scanf("%d", &sizeR);
	int* arrR = GetArr(sizeR);

	printf("[-] < ---- arrL ---- > \n");
	PrintArr(arrL, sizeL);
	printf("[-] < ---- arrR ---- > \n"); 
	PrintArr(arrR, sizeR);

	int* res_arr = MergeSortArr(arrL, arrR, sizeL, sizeR);
	printf("[-] < ---- res ---- > \n"); 
	PrintArr(res_arr, (sizeL+sizeR));

	printf("[-] < ---- sort ---- > \n"); 
	Sort(res_arr, (sizeL+sizeR));
	PrintArr(res_arr, (sizeL+sizeR));
	
	free(arrL); 
	free(arrR); 
	free(res_arr);

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

int* MergeSortArr(int* arrL, int* arrR, int sizeL, int sizeR)
{

	int* res = (int*)calloc(sizeL+sizeR, sizeof(int));

	for(size_t i = 0; i < sizeL; i++)
	{

		res[i] = 0; 
		res[i] = arrL[i];

	}

	int idx = sizeL;

	for(size_t i = 0; i < sizeR; i++)
	{

		res[idx] = 0; 
		res[idx] = arrR[i];
		idx++;

	}

	return res; 

}

void Sort(int* arr, int size)
{

	int temp; 
	temp = 0; 

	for(size_t i = 0; i < size; i++)
	{

		for(size_t k = i; k < size; k++)
		{

			if(arr[i] > arr[k])
			{

				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;

			}

		}

	}

}
