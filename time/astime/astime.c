#include <stdio.h>
#include <time.h>

void main(){
	struct tm *newTime;
	time_t szClock;

	time(&szClock);
	printf("szClock = %d\n",szClock);
	newTime = localtime(&szClock);
	printf("newTime = %s\n",asctime(newTime));
}