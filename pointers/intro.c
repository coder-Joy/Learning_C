#include <stdio.h>

int int main(void){

	int count = 14, numb;
	int *int_pointer;

	int_pointer = &count;
	numb = *int_pointer;

	printf("%d is count and %d is numb\n", count, numb);
	return 0;
}
