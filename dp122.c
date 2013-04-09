#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *wordList;
	char ch = ' ';
	char furthestVowel = '\0';
	char word[20];
	int boolWordPasses = 1; //0 is False, 1 is True
	int index = 0;
	wordList = fopen("enable1.txt", "r");
	if(wordList == NULL)
	{
		printf("Error reading filed!")
		return 1;
	}
	
	while(ch != 'EOF') {
		while(ch != '\n') {
			ch = fgetc(wordList);
			strcat(word, ch);
			printf("%s\n", word);
		}
	}
	return 0;
}