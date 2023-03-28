#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseStr( char* str );

int main( int argc , char* argv[ argc + 1 ] )
{

	char* t = ( char* )calloc( 15 , sizeof( char ) );
	
	t = strcpy( t , argv[1] );

	for( size_t i = 2 ; i < argc ; i++ )
	{

		strcat( t , argv[ i ] );

	}

	printf( "%s\n", t );

	ReverseStr( t );

	free( t ); 

	return EXIT_SUCCESS;

}

void ReverseStr( char* str )
{

	int len;
	len = strlen( str );

	int c;
	c = 0; 

	while( str[ c ] != '\0' )
	{

		printf( "%c" , str[ len - 1 ] );

		len--;
		c++;

	}

	printf( "\n" );

}
