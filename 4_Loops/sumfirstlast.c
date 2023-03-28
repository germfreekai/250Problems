#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int GetFirst(int n); 
int GetLast(int n);

int main(int argc, char* argv[argc+1])
{

	assert(argc == 2); 

	int n;
	n = atoi(argv[1]); 

	int first;
	first = GetFirst(n);

	int last; 
	last = GetLast(n);

	printf("First: %d\nLast: %d\nSum: %d + %d = %d\n",
			first,
			last,
			first,
			last,
			first + last);

	return EXIT_SUCCESS;

}

int GetFirst(int n)
{

	return n % 10;

}

int GetLast(int n)
{

	int res;
	res = 0; 

	while(n != 0)
	{

		res = n % 10;
		
		n /= 10;

	}

	return res;

}
