#include<stdio.h>

int main(){
	char name[50]; 
	char bestAnime[50];

	printf("please enter your name and that of your favourite anime. In the format: name best anime ");
	scanf("%s %s", name, bestAnime);
	printf("The programmer's name is: %s, and the best anime is: %s \n", name, bestAnime);

	return 0;
}
