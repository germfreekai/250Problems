#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **setArr(int row, int col, int op); 
void printArr(int row, int col, int **arr); 
int **transpose(int row, int col, int **arr); 
void freeArr(int row, int col, int **arr); 

int main(int argc, char *argv[argc + 1])
{

	assert(argc == 3 && "Wrong number of argumnets"); 

	int row;
	int col; 

	row = atoi(argv[1]); 
	col = atoi(argv[2]); 

	int **arr = setArr(row, col, 1); 

	printf("== ARR == \n"); 
	printArr(row, col, arr); 

	int **res = transpose(row, col, arr); 

	printf("\n== RES == \n"); 
	printArr(row, col, res);

	freeArr(row, col, res); 

	return EXIT_SUCCESS; 

}

int **setArr(int row, int col, int op)
{

	int **arr = (int**)calloc(row, sizeof(int*));

	for(size_t i = 0; i < row; i++)
	{

		arr[i] = (int*)calloc(col, sizeof(int));

	}

	if(op)
	{

		for(size_t i = 0; i < row; i++)
		{
			for(size_t j = 0; j < col; j++)
			{

				printf("[+] arr[%zu][%zu]: ", i, j); 
				scanf("%d", &arr[i][j]); 

			}

		}
	}
	return arr;

}

void printArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{
		
		printf("-- ROW %zu -- \n", i); 

		for(size_t j = 0; j < col; j++)
		{

			printf("[-] arr[%zu][%zu] -> %d \n", i, j, arr[i][j]);

		}

	}

}	

int **transpose(int row, int col, int **arr)
{

	int **res = setArr(row, col, 0); 

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			res[i][j] = arr[j][i]; 

		}

	}

	freeArr(row, col, arr); 

	return res; 

}

void freeArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{

		free(arr[i]);

	}

	free(arr);

}
