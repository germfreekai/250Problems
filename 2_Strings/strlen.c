#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StrLen( char* str );

int main( void )
{

	char* str = ( char* )calloc( 15 , sizeof( char ) );

	printf( "Str: " ); 
	scanf( "%[^\n]" , str );

	printf( "Len with strlen: %zu\n", strlen( str ) );

	StrLen( str );

	free( str ); 

	return EXIT_SUCCESS; 

}

void StrLen( char* str )
{

	int c; 
	c = 0;

	while( str[c]  != '\0' )
	{

		c++;

	}

	printf( "With StrLen: %d\n" , c );

}
