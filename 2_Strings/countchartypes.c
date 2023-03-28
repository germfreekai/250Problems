#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ctype.h>

void CountCTypes( char* str );

int main( int argc , char* argv[ argc + 1 ] )
{

	char* str = ( char* )calloc( 20 , sizeof( char ) );
	str = strcpy( str, argv[ 1 ] );

	for( size_t i = 2 ; i < argc ; i++ )
	{

		strcat( str , argv[ i ] );

	}

	printf( "Str: %s\n" , str );

	CountCTypes( str );

	free( str ); 

	return EXIT_SUCCESS;

}

void CountCTypes( char* str )
{

	int c; 
	c = 0; 

	int alpha;
	int num;
	int special;

	alpha = 0; 
	num = 0; 
	special = 0;

	while( str[ c ] != '\0' )
	{

		if( isalpha( str[c] ) )
		{

			alpha++;

		}
		else if( isdigit( str[c] ) )
		{

			num++;

		}
		else
		{

			special++;

		}

		c++;

	}

	printf("Alpha: %d || Digit: %d || Special: %d \n",
			alpha,
			num,
			special);

}
