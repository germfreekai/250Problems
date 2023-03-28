#include <stdio.h>
#include <stdlib.h>

void SumEven(int n); 

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]); 

	SumEven(n);

	return EXIT_SUCCESS;

}

void SumEven(int n)
{

	int res; 
	res = 0; 

	for(size_t i = 0; i <= n; i++)
	{

		if(i % 2 == 0)
			res = res + i;

	}

	printf("Res: %d\n", res);

}
