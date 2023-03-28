#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float a; 
	float b;

	a = 0.0;
	b = 0.0;

	printf("Give me two numbers [0.0 0.0] : "); 
	scanf("%f %f", &a, &b);

	printf("%f * %f = %.02f\n",
			a,
			b,
			a * b);

	return EXIT_SUCCESS;

}
