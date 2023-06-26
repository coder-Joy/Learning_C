#include<stdio.h>
#include<stdbool.h>

bool equalString(char str1[], char str2[]) {
	bool areEqual = false;
	int i = 0;

	while( str1[i] == str2[i] && str1[i] != '\0' && str2[i]!= '\0' ) {
		i++;

		if(str1[i] == '\0' && str2[i] == '\0') areEqual = true;
		else areEqual = false;
	}
	return areEqual;
}

int main(void) {
	printf("Now another time to get a try. The use of the b/a \v");
	char stringA[] = "show are you doing", stringB[] = "how are you doing";
	printf("%u \n", equalString(stringA, stringB));

	return 0;
}
