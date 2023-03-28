#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char c;

	printf("Give a char mthfk: "); 
	scanf("%c", &c);

	printf("Char: %c is --> %s\n",
			c,
			(c >= 'a' && c <= 'z') ? "Lower case" : (c >= 'A' && c <= 'Z') ? "Upper case" : "Smth else");

	return EXIT_SUCCESS;

}
