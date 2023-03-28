#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char* name; 
	int age; 

	struct Friend
	{
		char* name;
		int age; 
	}Fd;

}Me; 


int main(void)
{

	Me *me = (Me*)malloc(sizeof(Me)); 
	me->name = (char*)calloc(20,sizeof(char)); 

	me.Fd fr = (me.Fd*)malloc(sizeof(me.Fd)); 

	printf("Name\n> "); 
	scanf("%[^\n]", me->name); 

	printf("Age\n> "); 
	scanf("%d", &me->age); 
	
	printf("Name: %s || Age: %d\n",
			me->name, me->age); 

	free(me->name); 
	free(me); 

	return EXIT_SUCCESS; 

}

