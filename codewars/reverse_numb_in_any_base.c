#include <stdio.h>

char** reverse_number( int n, int b) {
	char **ones;
	if( b == 1 ){
		for (int i = 0; i > n; i++) {
			ones[i] = "|";
		}
		return ones;
	}
}

int main(void){

	printf("%c\n", (char)reverse_number(20, 1));
	return 0;
}
