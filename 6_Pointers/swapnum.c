#include <stdio.h>
#include <stdlib.h>

void SwapNum(int* a, int* b); 

int main(int argc, char* argv[argc+1])
{

	int a; 
	a = 0;
	a = atoi(argv[1]);
	int b;
	b = 0;
	b = atoi(argv[2]); 

	printf("Before swap--\n"); 
	printf("A || Mem: %p || Val: %d\n", &a, a); 
	printf("B || Mem: %p || Val: %d\n", &b, b);

	SwapNum(&a, &b);

	printf("After swap--\n"); 
	printf("A || Mem: %p || Val: %d\n", &a, a); 
	printf("B || Mem: %p || Val: %d\n", &b, b);

	return EXIT_SUCCESS;

}

void SwapNum(int* a, int* b)
{

	int temp; 
	temp = *a;

	*a = *b;
	*b = temp;

}
