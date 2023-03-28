#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int IsEven(int n); 

int main(int argc, char* argv[argc+1])
{

	assert(argc==2);

	int n;
	n = atoi(argv[1]);

	printf("%s\n",
			IsEven(n) == 1 ? "Even": "Odd");

	return EXIT_SUCCESS;

}

int IsEven(int n)
{

	return !(n & 1); // If last bit is 1, it is odd and 1&1 == true

}
