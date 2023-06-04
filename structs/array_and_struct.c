#include <stdio.h>

struct time{
	int second;
	int minute;
	int hour;
};

int main()
{
	struct time timeUpdate(struct time now);
	struct time testTimes[5] = {
		{11, 59, 59}, {23, 23, 39}, {19, 20, 49}	
	};

	for ( int i = 0; i < 5; i++ )
	{
		printf("Time is %.2i:%.2i:%.2i \n", testTimes[i].hour, testTimes[i].minute, testTimes[i].second);

		testTimes[i] = timeUpdate(testTimes[i]);
		printf("...one second later the time is now %.2i:%.2i:%.2i \n", testTimes[i].hour, testTimes[i].minute, testTimes[i].second);
	}

	return 0;
}

struct time timeUpdate( struct time now) {
	struct time later;

	if ( now.second == 59 ){
		//first I will want to check if I can update only the minute, then I'll check if I can do that for both the minute and the hour
		later.second = 0;
		later.minute = now.minute + 1;
		later.hour = now.hour;
	} else if( now.second == 59 && now.minute == 59 ){
		later.second = 0;
		later.minute = 0;
		later.hour = now.hour + 1;
	} else if(  now.second == 59 && now.minute == 59 && now.hour == 23){
		later.second = 0;
		later.minute = 0;
		later.hour = 0;
	}else {
		later.second = now.second + 1;
		later.minute = now.minute;
		later.hour = now.hour;
	}
	return later;
}
