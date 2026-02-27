#include <stdio.h>
#include <string.h>

void countVowel(char *w, int size);

int main() {
	
	char word[100];
	fgets(word, sizeof(word), stdin);
	countVowel(word, strlen(word));

	return 0;
}

void countVowel(char *w, int size){
	char vowel[5] = {'a','e','i','o','u'};
	int count = 0;
	for(int i=0; i<5; i++){
		for(int j=0; j<size; j++){
			if(vowel[i] == w[j]){
				count++;
			}
		}
		printf("%c: %d\n",vowel[i],count);
		count = 0;
	}
}