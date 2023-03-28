#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct
{
	int h;
	int m;
	int s;

}Time;

Time* getTimeDiff(Time* t1, Time* t2); 
void printTime(Time *t); 

int main(int argc, char* argv[argc + 1])
{

	Time* t1 = (Time*)malloc(sizeof(Time)); 
	Time* t2 = (Time*)malloc(sizeof(Time)); 

	t1->h = atoi(argv[1]);
	t1->m = atoi(argv[2]);
	t1->s = atoi(argv[3]);

	t2->h = atoi(argv[4]);
	t2->m = atoi(argv[5]);
	t2->s = atoi(argv[6]);

	assert((t1->h >= 0 && t1->h < 25) && (t2->h >= 0 && t2->h < 25) && "Hour [0-24]"); 
	assert((t1->m >= 0 && t1->m < 60) && (t2->m >= 0 && t2->m < 60) && "Minutes [0-59]"); 
	assert((t1->h >= 0 && t1->h < 60) && (t2->h >= 0 && t2->h < 60) && "Seconds [0-59]"); 

	printTime(t1); 
	printTime(t2); 

	Time* res = getTimeDiff(t1, t2); 

	printf("Time difference: ");
	printTime(res); 

	free(t1); 
	free(t2); 
	free(res); 

	return EXIT_SUCCESS;

}

void printTime(Time *t)
{

	printf("> %02d:%02d:%02d\n", 
			t->h,
			t->m, 
			t->s);

}

Time* getTimeDiff(Time* t1, Time* t2)
{

	Time *res = (Time*)malloc(sizeof(Time)); 

	int seg;
	int tseg;
	int min;
	int tmin;
	int hr;
	int thr;
	
	tseg = t1->s - t2->s;
	seg = tseg >= 0 ? tseg : (60 - (tseg * -1)); 

	res->s = seg;

	if (tseg < 0)
		t1->m--;

	tmin = t1->m - t2->m;
	min = tmin >= 0 ? tmin : (60 - (tmin * -1));

	res->m = min;

	if (tmin < 0)
		t1->h--;

	thr = t1->h - t2->h;
	hr = thr >= 0 ? thr : (25 - (thr * -1));

	res->h = hr;

	return res;

}
