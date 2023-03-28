#include <stdio.h>
#include <stdlib.h>

void SwapVars(int* a, int* b); 

int main(int argc, char* argv[argc + 1])
{

	int a = atoi(argv[1]); 
	int b = atoi(argv[2]); 

	printf("A: %d  Mem: %p || B: %d Mem: %p\n",
			a, 
			&a,
			b, 
			&b); 

	SwapVars(&a, &b);

	printf("A: %d  Mem: %p || B: %d Mem: %p\n",
			a, 
			&a,
			b, 
			&b); 

	return EXIT_SUCCESS;

}

void SwapVars(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp; 

}
