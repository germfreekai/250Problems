#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **setArr(int row, int col); 
void printArr(int row, int col, int **arr); 
int equalArr(int row1, int col1, int **arr1, int row2, int col2, int **arr2);
void freeArr(int row, int col, int **arr); 

int main(int argc, char *argv[argc + 1])
{

	int row1;
	int col1; 

	row1 = atoi(argv[1]);
	col1 = atoi(argv[2]); 

	int row2;
	int col2; 

	row2 = atoi(argv[3]); 
	col2 = atoi(argv[4]); 

	int **arr1 = setArr(row1, col1);

	printf("== ARR 1 == \n");
	printArr(row1, col1, arr1);
	printf("\n"); 

	int **arr2 = setArr(row2, col2);

	printf("== ARR 2 == \n"); 
	printArr(row2, col2, arr2);
	printf("\n"); 

	printf("\nEqual: %s\n", equalArr(row1, col1, arr1, row2, col2, arr2) == 1 ? "True" : "False");

	freeArr(row1, col1, arr1);
	freeArr(row2, col2, arr2); 

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

		printf("// ROW %zu \\\\ \n", i);

		for(size_t j = 0; j < col; j++)
		{

			printf("[+] arr[%zu][%zu] = ", i, j); 
			scanf("%d", &arr[i][j]);

		}

	}

	return arr;
}

void printArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{

		printf("// ROW %zu \\\\ \n", i);

		for(size_t j = 0; j < col; j++)
		{

			printf("[-] arr[%zu][%zu] -> %d \n", i, j, arr[i][j]);

		}

	}

}

int equalArr(int row1, int col1, int **arr1, int row2, int col2, int **arr2)
{

	if(row1 != row2 || col1 != col2)
		return 0; 

	for(size_t i = 0; i < row1; i++)
	{

		for(size_t j = 0; j < col1; j++)
		{

			if(arr1[i][j] != arr2[i][j])
				return 0;

		}

	}

	return 1;

}
void freeArr(int row, int col, int **arr)
{

	for(size_t i = 0; i < row; i++)
	{

		free(arr[i]); 

	}

	free(arr); 

}
