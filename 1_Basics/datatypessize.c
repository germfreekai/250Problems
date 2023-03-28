#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a; 
	float b;
	char c;
	size_t i; 

	printf("Size:\nInt: %ld || Float: %ld || Char: %ld || Size_t: %ld\n",
			sizeof(a),
			sizeof(b),
			sizeof(c),
			sizeof(i));

	return EXIT_SUCCESS;

}
