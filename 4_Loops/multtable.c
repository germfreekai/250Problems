#include <stdio.h>
#include <stdlib.h>

void MultTable(int n);

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]);

	MultTable(n);

	return EXIT_SUCCESS;

}

void MultTable(int n)
{

	printf("Multiplication table for: %d\n\n", n);

	for(int i = 0; i <= 10; i++)
	{

		printf("%d * %d = %d\n",
				n,
				i,
				n*i);

	}

}
