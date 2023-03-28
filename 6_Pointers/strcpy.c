#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Strcpy(char* str, char* cpy); 

int main(void)
{

	char* str = (char*)calloc(10,sizeof(char));
	char* cpy = (char*)calloc(10,sizeof(char));

	printf("Give me a str: "); 
	scanf("%[^\n]", str); 

	strcpy(cpy, str); 

	printf("Str: %s\n", str); 
	printf("Cpy: %s\n", cpy); 

	free(str); 
	free(cpy); 

	return EXIT_SUCCESS;

}
