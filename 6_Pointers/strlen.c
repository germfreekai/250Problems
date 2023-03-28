#include <stdio.h>
#include <stdlib.h>

int StrLen(char* str); 

int main(int argc, char* argv[argc+1])
{

	printf("Str: %s has len of %d\n",
			argv[1],
			StrLen(argv[1]));

	return EXIT_SUCCESS;

}

int StrLen(char* str)
{

	int c; 
	c = 0; 

	while(*str)
	{

		c++;
		str++;

	}

	return c;

}
