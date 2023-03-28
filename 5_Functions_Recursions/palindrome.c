#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Reverse(int n); 
int IsPalindrome(int n, int reverse);

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]);

	int reverse; 
	reverse = Reverse(n); 

	printf("%d || %d\n",
			n,
			reverse);


	printf("%s\n", IsPalindrome(n, reverse) == 1 ? "Palindrome" : "No Palindrome");

	return EXIT_SUCCESS;

}

int IsPalindrome(int n, int reverse)
{

	return n == reverse;

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
