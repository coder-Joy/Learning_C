#include <stdio.h>

struct dateTime {
	struct date edate;
	struct time etime;
};

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

int main()
{
	struct dateTime event;
	printf("please enter the informations for your event");
	printf("The formate DD-MM-YY hh:mm\n");


	scanf("%i-%i-%i %i:%i:%i", event.edate.day, event.edate.time, event.edate.year, event.etime.hour, event.etime.minute, event.etime.second
);

	return 0;
}
