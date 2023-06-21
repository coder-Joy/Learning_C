#include<stdio.h>

int stringLength(char *string) {
	int length = 0, i = 0;

	while( string[i] != '\0'){
		length++;
		++i;
	}

	return length;
}

int main(void) {
	char strings[] = "this is the string. Now let me see some few things";
	printf("The length is %i", stringLength(strings));

	return 0;
}
