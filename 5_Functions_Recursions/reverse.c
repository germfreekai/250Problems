#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Reverse(int n); 

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]);

	printf("%d || %d\n",
			n,
			Reverse(n));

	return EXIT_SUCCESS;

}

int Reverse(int n)
{

	int res;
	int digit;
	digit = (int)log10(n);
	
	if(n < 10)
	{

		return n;

	}

	res = (n % 10) * pow(10,digit);

	n /= 10;

	return res + Reverse(n);

}
