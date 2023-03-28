#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int BinaryToDecimal(char* binary); 

int main(int argc, char* argv[argc+1])
{

	printf("Binary: %s || ", argv[1]); 

	printf("Decimal: %d\n", BinaryToDecimal(argv[1]));

	return EXIT_SUCCESS;

}

int BinaryToDecimal(char* binary)
{

	int len;
	len = strlen(binary);
	len--;

	int exp; 
	exp = 0;

	int res; 
	res = 0;

	while(binary[len] != '\0')
	{

		if(binary[len] != '1' && binary[len] != '0')
		{

			printf("Invalid character: %c\n", binary[len]);
			
			exit(2);

		}
		else if(binary[len] == '1')
		{

			res = res + pow(2, exp);

			exp++;

			len--;

		}
		else
		{

			exp++;

			len--;

		}

	}

	return res; 

}
