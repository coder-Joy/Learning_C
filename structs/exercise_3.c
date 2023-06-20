#include<stdio.h>
#include<stdbool.h>

struct time {
	int hour;
	int minutes;
	int seconds;
};

struct time elapse_time(struct time time1, struct time time2);

int main(){

	struct time time1, time2;
	printf("This program will help you calculate the time elapse between 2 periods \n");

	printf("Enter the first time, HH:MM:SS ");
	scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
	
	printf("Enter the second time, HH:MM:SS ");
	scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);
	
	if (time2.hour < time1.hour) {
		printf("There is an error in the time inserted \n");
	} else if( time2.hour == time1.hour && time2.minutes < time1.minutes){
		printf("The time can't be decreasing (Check those minute again)\n");
	} else {
		struct time ans = elapse_time(time1, time2);
		printf("The time elapse is  %i:%i:%i \n", ans.hour, ans.minutes, ans.seconds);
	}
	
	return 0;
}

struct time elapse_time(struct time timeA, struct time timeB)
{
	struct time eTime = {
		timeB.hour - timeA.hour,
		timeB.minutes - timeA.minutes,
		timeB.seconds - timeA.seconds
		};
	
	if( timeB.minutes < timeA.minutes && timeB.hour >= timeA.hour && timeB.seconds >= timeA.seconds ) {
		struct time bTime = {
			(timeB.hour - 1) - timeA.hour,
			(timeB.minutes + 60) - timeA.minutes,
			timeB.seconds- timeA.seconds
		};
		return bTime;
	}
	return eTime;
}
