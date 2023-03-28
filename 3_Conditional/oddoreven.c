#include <stdio.h>
#include <stdlib.h>

int OddOrEven( int n );

int main( int argc , char* argv[ argc + 1 ] )
{

	int n;

	for( size_t i = 1;  i < argc ; i++)
	{

		n = atoi( argv[ i ] );

		printf("Num %d is %s\n",
			       n,
	       	       	       OddOrEven( n ) == 1 ? "Odd" : "Even");

	}

	return EXIT_SUCCESS;

}

int OddOrEven( int n )
{

	return n % 2 == 0 ? 0 : 1;

}
