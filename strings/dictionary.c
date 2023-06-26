#include<stdio.h>
#include<stdbool.h>

struct entry {
	char word[20];
	char definition[100];
};

bool equalString(const char str1[], const char str2[]) {
	int i = 0;
	bool areEqual= false;
	
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
		i++;

		if(str1[i] == '\0' && str2[i] == '\0') areEqual = true;
		else areEqual = false;
	}
	
	return areEqual;
}

int lookup(const struct entry dictionary[], const char search[], const int entries){
	int i;
	bool equalString( const char s1[], const char s2[]);

	for(i = 0; i < entries; i++){
		if(equalString(search, dictionary[i].word)) return i;	
	}
	
	return -1;
}

int main(void) {

	const struct entry dictionary[100] =
		{ { "aardvark", 
			"a burrowing African mammal"},
			{ "abyss",
				"a bottomless pit"
			},
			{ "acumen",
				"mentally sharp; keen"
			},
			{ "addle",
				"to become confused"
			},
			{ "aerie",
				"a high nest"
			},
			{ "affix",
				"to append; attach"
			},
			{ "agar",
				"a jelly made from seaweed"
			},
			{ "ahoy",
				"a nautical call of greeting"
			},
			{ "aigrette", 
				"an ornamental cluster of feathers"
			},
			{ "ajar",
				"partially opened"
			} };

	char word[10];
	int	entries = 10;
	int	entry;

	int lookup(const struct entry dictionary[], const char search[], const int entries);

	printf ("Enter word: ");
	scanf ("%14s", word);
	entry = lookup (dictionary, word, entries);
	if ( entry != -1 )
		printf ("%s\n", dictionary[entry].definition);
	else
		printf ("Sorry, the word %s is not in my dictionary.\n", word);

	return 0;
}
