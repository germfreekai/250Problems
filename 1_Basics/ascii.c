#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc + 1])
{

	char c; 
	printf("Give me a char: "); 
	scanf("%c", &c); 
	printf("%c -> %d\n", c, c); 

	return EXIT_SUCCESS;

}
