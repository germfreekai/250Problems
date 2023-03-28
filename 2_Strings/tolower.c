#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( void )
{

	char* str = ( char* )calloc(15 , sizeof( char ) );

	printf( "Str: " );
	scanf( "%[^\n]" , str );

	int c; 
	c = 0; 

	while( str[c] != '\0' )
	{

		printf( "%c" , tolower( str[c] ) );

		c++;

	}

	printf( "\n" ); 

	free( str ); 

	return EXIT_SUCCESS;

}
