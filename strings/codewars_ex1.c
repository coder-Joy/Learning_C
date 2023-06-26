#include<stdio.h>
int stringlen(char *str){
	int len = 0, i = 0;

	while(str[i] != '\0'){
		len++;
		i++;
	}
	return len;
}

char duplicate_enc(const char string[]){
	int i = 0, j = 0;

	for(; i <	stringlen(string); i++){
		for(; j < stringlen(string); j++){
			if(string[i] == string[j]) return '(';
		}
	}
	return ;
}

int main(void){

	return 0;
}
