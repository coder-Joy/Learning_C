#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct time {
	int hour;
	int minute;
	int second;
};

//Important note: Always declare the inner structs before
//the outer one; Eg: time and date before dateTime
struct dateTime {
	struct date edate;
	struct time etime;
};

int main()
{
	struct dateTime event;
	printf("please enter the informations for your event");
	printf("The formate DD-MM-YY hh:mm:ss\n");

	scanf("%i-%i-%i %i:%i:%i", &event.edate.day, &event.edate.month, &event.edate.year, &event.etime.hour, &event.etime.minute, &event.etime.second
);

	printf("The results are %i-%i-%i %i:%i:%i \n", event.edate.day, event.edate.month, event.edate.year, event.etime.hour, event.etime.minute, event.etime.second);

	return 0;
}
