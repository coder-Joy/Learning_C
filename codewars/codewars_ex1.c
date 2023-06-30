#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int stringlen(char *str){
	int len = 0, i = 0;

	while(str[i] != '\0'){
		len++;
		i++;
	}
	return len;
}

bool contains(char string[]){
	int it = 0, jt = 0;
	bool isRepeated = false;
	bool* answer = (bool*) malloc(sizeof(bool));

	for(; it < stringlen(string); it++){
		for(; jt < stringlen(string); jt++) {
		 if(string[it] == string[it + 1]){
				printf("The ans for the character %c is:\n", string[it]);
				printf("The answer is true\n");
				isRepeated = true;
				answer[it] = isRepeated;
				break;
			}else {
				printf("The ans for the character %c is:\n", string[it]);
				printf("the answer is false\n");
				isRepeated =false;
				answer[it] = isRepeated;
				break;
			}
		}
	}
	return isRepeated;
}

char duplicate_enc(const char string[]){
	int i = 0, j = 0;
	//now use an array to check if all what gets in it is the same. if it
	//then make sure to us a '(', if it is, use the ')'

	/* for(; i <	stringlen(string); i++){
		for(; j < stringlen(string); j++){
			if(string[i] == string[j]) return '(';
			else return ')';
		}
	} */
	//Or I can also use the js style by creating a contains function
	//which will loop through all the characters in the string and return a (
	//if it is contained and a ) if it isn't 
	return '(';
}

int main(void){

	char strings[] = "hhello";

	bool isReated = contains(strings);
	printf("the length is %d \n", stringlen(strings));
	printf("And the character is repeated? %d\n", isReated);

	return 0;
}
