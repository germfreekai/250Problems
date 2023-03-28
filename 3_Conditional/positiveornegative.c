#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char* argv[argc+1])
{

	assert(argc == 2); 

	int n; 
	n = atoi(argv[1]);

	printf("Number %d is --> %s\n", 
			n,
			n == 0 ? "ZERO" : n < 0 ? "NEGATIVE" : "POSITIVE");

	return EXIT_SUCCESS;

}

