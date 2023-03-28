#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

void ReverseNum(int n); 

int main(int argc, char* argv[argc+1])
{

	assert(argc == 2);

	int n; 
	n = atoi(argv[1]);

	ReverseNum(n);

	return EXIT_SUCCESS;

}

void ReverseNum(int n)
{

	int last;
	last = 0; 

	int res;
	res = 0;

	int c; 
	c = 1;

	printf("Num: %d || ", n);

	while(n > 10)
	{

		last = n % 10;

		res = res + last;

		res = res * 10;
		
		c++;

		n /= 10;

	}

	last = n % 10;
	res = res + last; 

	printf("Reverse: %d\n", res);

}
