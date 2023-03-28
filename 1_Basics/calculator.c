#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct
{
	float a; 
	float b;

}Nums; 

void Menu(Nums* nums);
void GetNum(Nums* nums); 
void sum(Nums* nums);
void res(Nums* nums);
void mult(Nums* nums);
void divi(Nums* nums);

int main(void)
{

	Nums* nums = (Nums*)malloc(sizeof(Nums));
	nums->a = 0.0; 
	nums->b = 0.0;

	Menu(nums);

	free(nums); 

	return EXIT_SUCCESS; 

}

void Menu(Nums* nums)
{

	int flag = 1; 
	int option = 0;

	while(flag)
	{
		system("clear"); 

		printf("\rWelcome! Select an option\n[1] Sum\n[2] Res\n[3] Mult\n[4] Div\nOption: ");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				GetNum(nums);
				sum(nums); 
				break;
			case 2: 
				GetNum(nums);
				res(nums);
				break;
			case 3:
				GetNum(nums);
				mult(nums);
				break;
			case 4: 
				GetNum(nums);
				divi(nums);
				break;
			default: 
				printf("Wrong option, quitting!..\n");
				flag = 0; 
				break;
		}
	}

}

void GetNum(Nums* nums)
{

	printf("Give me numbers [a b]: "); 
	scanf("%f %f", &nums->a, &nums->b); 
}

void sum(Nums* nums)
{

	printf("%f + %f = %0.3f\n",
			nums->a,
			nums->b,
			nums->a + nums->b);

	sleep(1);
}

void res(Nums* nums)
{

	printf("%f - %f = %0.3f\n",
			nums->a,
			nums->b,
			nums->a - nums->b);

	sleep(1);
}

void mult(Nums* nums)
{

	printf("%f * %f = %0.3f\n",
			nums->a,
			nums->b,
			nums->a * nums->b);

	sleep(1);
}

void divi(Nums* nums)
{

	if(nums->b != 0)
	{

		printf("%f / %f = %0.3f\n",
				nums->a,
				nums->b,
				nums->a / nums->b);

	}
	else
	{

		printf("ERR: Division by 0\n"); 

	}

	sleep(1);
}
