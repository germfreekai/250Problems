#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

int VowelOrConsonant(char c);

int main(void)
{

	char c; 

	printf("Give me a char: ");
	scanf("%c", &c);

	printf("Char: %c is a %s\n",
			c,
			VowelOrConsonant(c) == 1 ? "Vowel" : "Consonant");

	return EXIT_SUCCESS;

}

int VowelOrConsonant(char c)
{

	if(!isalpha(c))
	{

		printf("Char: %c is not a alphabet\n",
				c);
		exit(2);

	}

	if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
	{

		return 1;


	}
	else 
	{

		return 0;

	}

}
