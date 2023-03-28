#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{

	char str1[10] = "Hola ";
	char str2[10] = "Mundo\n"; 

	strcat( str1 , str2 );

	printf( "Str: %s", str1 );

	char* cstr1 = (char*)calloc(15,sizeof(char));
	char* cstr2 = (char*)calloc(15,sizeof(char));

	printf( "Give me str1: " );
	scanf( "%[^\n]" , cstr1 ); 

	getchar(); 

	printf( "Give me str2: " );
	scanf( "%[^\n]" , cstr2 );

	strcat( cstr1 , cstr2 );
	
	printf( "Cstr: %s\n", cstr1 ); 

	free( cstr1 );
	free( cstr2 );

	return EXIT_SUCCESS;

}
