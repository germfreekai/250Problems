#include <stdio.h>
#include <stdlib.h>

void OddOrEven(int lower, int upper); 

int main(int argc, char* argv[argc+1])
{

	int lower;
	lower = atoi(argv[1]); 
	
	int upper;
	upper = atoi(argv[2]);

	OddOrEven(lower, upper);

	return EXIT_SUCCESS;

}

void OddOrEven(int lower, int upper)
{

	if(lower == upper)
	{

		printf("%d --> %s\n",
				lower,
				!(lower & 1) ? "Even" : "Odd");

		return;

	}

	printf("%d --> %s\n",
			lower,
			!(lower & 1) ? "Even": "Odd");

	OddOrEven(lower+1,upper);

}
