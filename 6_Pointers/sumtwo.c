#include <stdio.h>
#include <stdlib.h>

int Sum(int* a, int* b);

int main(int argc, char* argv[argc+1])
{

	int a;
	a = atoi(argv[1]); 
	int b;
	b = atoi(argv[2]); 

	printf("%d + %d = %d\n",
			a,
			b,
			Sum(&a, &b));

	return EXIT_SUCCESS;

}

int Sum(int* a, int* b)
{

	return *a + *b; 

}
