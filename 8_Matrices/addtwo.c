#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int** setMatrix(int row, int col); 
void freeMatrix(int** mx, int row, int col); 
void printMatrix(int** mx, int row, int col); 
void sumMatrix(int **mtz_1, int **mtz_2, int row, int col); 

int main(int argc, char* argv[argc + 1])
{

	assert(argc > 1); 

	int row = atoi(argv[1]); 
	int col = atoi(argv[2]); 

	printf("== Matrix 1 ==\n");
	int **mtz_1 = setMatrix(row, col);
	printMatrix(mtz_1, row, col); 
	printf("== Matrix 2 ==\n");
	int **mtz_2 = setMatrix(row, col); 
	printMatrix(mtz_2, row, col); 

	sumMatrix(mtz_1, mtz_2, row, col); 

	freeMatrix(mtz_1, row, col); 
	freeMatrix(mtz_2, row, col); 

	return EXIT_SUCCESS;

}

int** setMatrix(int row, int col)
{

	int **mx = (int**)calloc(row,sizeof(int*)); 

	for(size_t i = 0; i < row; i++)
	{
	
		mx[i] = calloc(col, sizeof(int));
	
	}

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			printf("Give me mx[%zu][%zu] = ", i, j);
			scanf("%d", &mx[i][j]);

		}

	}

	return mx; 

}

void printMatrix(int** mx, int row, int col)
{

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			printf("[%zu][%zu] = %d\n", i, j, mx[i][j]);

		}

	}

}

void freeMatrix(int** mx, int row, int col)
{

	for(size_t i = 0; i < row; i++)
	{

		free(mx[i]);

	}

	free(mx);

}

void sumMatrix(int **mtz_1, int **mtz_2, int row, int col)
{

	int **res = (int**)calloc(row,sizeof(int*));
	for(size_t i = 0; i < row; i++)
	{

		res[i] = calloc(col,sizeof(int));

	}

	for(size_t i = 0; i < row; i++)
	{
		for(size_t j = 0; j < col; j++)
		{

			res[i][j] = mtz_1[i][j] + mtz_2[i][j];

		}

	}

	printf("== Res ==\n"); 
	printMatrix(res, row, col); 

	freeMatrix(res, row, col); 

}
