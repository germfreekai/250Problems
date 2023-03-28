#include <stdio.h>
#include <stdlib.h>

void Ascii(void);

int main(void)
{

	Ascii();

	return EXIT_SUCCESS;

}

void Ascii(void)
{

	for(int i = 'a'; i <= 'z'; i++)
	{

		printf("Char: %c || Ascii: %d\n",
				i,
				i);

	}

}
