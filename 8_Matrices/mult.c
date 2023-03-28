#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int** setArr(int row, int col, int op);
void printArr(int **arr, int row, int col); 
void freeArr(int **arr, int row, int col); 
int** multArr(int row1, int col1, int **arr1, int row2, int col2, int **arr2);

int main(int argc, char* argv[argc + 1])
{
	
	assert(argc == 5 && "Wrong number of args"); 

	int row1;
	int col1;
	int row2;
	int col2;

	row1 = atoi(argv[1]); 
	col1 = atoi(argv[2]); 
	
	row2 = atoi(argv[3]); 
	col2 = atoi(argv[4]); 

	assert(col1 == row2 && "N col1 must be equal as N row2, usage ./program ROW1 COL1 ROW2 COL2");

	int** arr1 = setArr(row1, col1, 1); 
	int** arr2 = setArr(row2, col2, 1);

	printf("== arr 1 == \n"); 
	printArr(arr1, row1, col1); 
	
	printf("== arr 2 == \n"); 
	printArr(arr2, row2, col2); 

	int **res = multArr(row1, col1, arr1, row2, col2, arr2);

	printf("== res == \n"); 
	printArr(res, row1, col2); 

	freeArr(arr1, row1, col1); 
	freeArr(arr2, row2, col2); 
	freeArr(res, row1, col2); 

	return EXIT_SUCCESS;

}

int** setArr(int row, int col, int op)
{

	int **arr = (int**)calloc(row, sizeof(int*)); 

	for(size_t i = 0; i < row; i++)
	{

		arr[i] = (int*)calloc(col,sizeof(int));
		
	}
	
	if(op)
	{

		for(size_t k = 0; k < row; k++)
		{

			printf("++ ROW %zu ++\n", k);

			for(size_t j = 0; j < col; j++)
			{

				printf("arr[%zu][%zu]: ", k, j);
				scanf("%d", &arr[k][j]);

			}
		
		}

	}


	return arr;

}

void printArr(int** arr, int row, int col)
{

	for(size_t i = 0; i < row; i++)
	{

		printf("++ ROW %zu ++\n", i); 

		for(size_t j = 0; j < col; j++)
		{

			printf("arr[%zu][%zu]: %d\n", i, j, arr[i][j]);

		}

	}

}

void freeArr(int** arr, int row, int col)
{

	for(size_t i = 0; i < row; i++)
	{

		free(arr[i]); 

	}

	free(arr); 

}

int** multArr(int row1, int col1, int **arr1, int row2, int col2, int **arr2)
{

	int **res = setArr(row1, col2, 0);

	for(size_t i = 0; i < row1; i++)
	{
		for(size_t j = 0; j < col2; j++)
		{
			for(size_t k = 0; k < row1; k++)
			{
				res[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	return res;
}
