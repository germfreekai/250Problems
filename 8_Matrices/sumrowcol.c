#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **setArr(int row, int col); 
void printArr(int row, int col, int **arr); 
void sum(int row, int col, int **arr); 
void freeArr(int row, int col, int **arr); 

int main(int argc, char *argv[argc + 1])
{

	assert(argc == 3 && "Wrong number of arguments"); 

	int row; 
	int col; 

	row = atoi(argv[1]); 
	col = atoi(argv[2]); 

	int **arr = setArr(row, col); 

	printf("== ARR == \n"); 
	printArr(row, col, arr); 

	sum(row, col, arr); 

	freeArr(row, col, arr); 

	return EXIT_SUCCESS; 

}

int **setArr(int row, int col)
{
	int **arr = (int**)calloc(row, sizeof(int*));

	for(size_t i = 0; i < row; i++)
	{

		arr[i] = (int*)calloc(col, sizeof(int)); 

	}

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			printf("[+] arr[%zu][%zu]: ", i, j); 
			scanf("%d", &arr[i][j]); 

		}

	}

	return arr; 

}

void printArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			printf("[-] arr[%zu][%zu] -> %d \n", i, j, arr[i][j]); 

		}

	}

}

void sum(int row, int col, int **arr)
{

	int srow; 
	int scol;

	srow = 0; 
	scol = 0; 

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{
			srow += arr[i][j];
		}

		printf("Sum of row %zu ->> %d \n", i, srow);
		srow = 0; 

	}

	for(size_t i = 0; i < col; i++)
	{
		for(size_t j = 0; j < row; j++)
		{
			scol += arr[j][i];
		}
		
		printf("Sum of col %zu ->> %d\n", i, scol);
		scol = 0; 
	}

}

void freeArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{

		free(arr[i]); 

	}

	free(arr);

}
