#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SwapFirstLast(int n);
int GetFirst(int n);
int GetLast(int n);
int CountDigits(int n);
int MultTen(int n, int digits);

int main(int argc, char* argv[argc+1])
{

	int n; 
	n = atoi(argv[1]);

	printf("Original: %d\n", n);
	
	SwapFirstLast(n); 

	return EXIT_SUCCESS;

}

int CountDigits(int n)
{

	int d;
	d = 0; 

	while(n != 0)
	{

		n = n / 10;
		d++;

	}

	return d;

}

int GetFirst(int n)
{

	return n % 10;

}

int GetLast(int n)
{

	int res;
	res = 0;

	while(n != 0)
	{

		res = n % 10; 
		n = n / 10;

	}

	return res;

}

void SwapFirstLast(int n)
{

	int first; 
	first = GetFirst(n);

	int last;
	last = GetLast(n);

	int ten;
	ten = 10;
	int c;
	c = 1;

	int res;
	res = last;

	int temp; 
	temp = 0;

	n /= 10; 

	while(n > 10)
	{

		temp = n % 10; // el hasta la derecha

		ten = pow(ten, c);
		c++;

		temp = temp * ten;

		res = res + temp;

		n = n / 10; 
		ten = 10;

	}

	ten = pow(ten, c);
	temp = first * ten;

	res = res + temp;

	printf("Swaped: %d\n", res);

}
