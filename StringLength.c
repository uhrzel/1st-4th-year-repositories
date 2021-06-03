/*Calculate length of string Using String Functions*/
#include<stdio.h>
#include<string.h>
int main()
{
	 char word[50];
	
	printf("Enter word: ");
	gets(word);
	
	printf("Length of string is %d",strlen(word));
	
	return 0;
}