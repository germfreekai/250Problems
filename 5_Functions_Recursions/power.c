#include <stdio.h>
#include <stdlib.h>

int Power(int n, int exp);

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]);

	int exp;
	exp = atoi(argv[2]); 

	printf("%d ^ %d = %d\n",
			n,
			exp,
			Power(n, exp));

	return EXIT_SUCCESS;

}

int Power(int n, int exp)
{

	// Base case
	if(exp == 0)
		return 1;

	return n * Power(n, exp-1);

}
