#include<stdio.h>
#include<stdbool.h>

struct studentInfor 
{
	char *name;
	int age;
	char mathGrade;
	bool isAdmited;
} coder_J = {"Suh Joy", 19, 'C', true};

int main(void) {
	printf("The info of coderJ are: name: %s, age: %i, Math grades: %c, and is he Admited?: %u \n", coder_J.name, coder_J.age, coder_J.mathGrade, coder_J.isAdmited);

	return 0;
}
