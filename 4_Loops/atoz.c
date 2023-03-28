#include <stdio.h>
#include <stdlib.h>

void AToZ(void);

int main(void)
{

	AToZ();

	return EXIT_SUCCESS;

}

void AToZ(void)
{

	for(int i = 'a'; i <= 'z'; i++)
	{

		printf("%c\n", i);

	}

}
