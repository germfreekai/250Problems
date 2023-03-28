#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char* name;
	int age;

}Person;

int main(void)
{

	Person* p = (Person*)malloc(sizeof(Person));

	p->name = (char*)calloc(20, sizeof(char));

	printf("Name\n> "); 
	scanf("%19[^\n]", p->name);

	getchar();

	printf("Age\n> "); 
	scanf("%d", &p->age); 

	printf("Hello %s, looking young for being %d\n", p->name, p->age); 

	free(p->name); 
	free(p); 

	return EXIT_SUCCESS;

}
