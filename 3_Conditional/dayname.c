#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char* argv[argc+1])
{

	assert(argc == 2);

	int n;
	n = atoi(argv[1]);

	printf("%s\n",
			n == 1 ? "Monday" : 
			n == 2 ? "Tuesday" :
			n == 3 ? "Wednesday" :
			n == 4 ? "Thursday" :
			n == 5 ? "Friday" :
			n == 6 ? "Saturday" :
			n == 7 ? "Sunday" : "Not valid");

	return EXIT_SUCCESS;

}
