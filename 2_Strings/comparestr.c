#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc , char* argv[ argc + 1 ] )
{

	if( !strcmp( argv[ 1 ] , argv[ 2 ] ) )
	{

		printf( "%s == %s || True\n",
				argv[ 1 ], 
				argv[ 2 ] );

	}
	else 
	{
		
		printf( "%s == %s || False\n",
				argv[ 1 ], 
				argv[ 2 ] );

	}

	return EXIT_SUCCESS;

}
