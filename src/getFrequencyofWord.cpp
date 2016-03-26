/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<stdio.h>
int count_word_in_str_way_1(char *str, char *word){
	int i, j = 0, p = 0, len = 0;
	for (i = 0; word[i] != '\0'; i++)
	{
		len++;
	}
	while (str[j] != '\0')
	{
		i = 0;
		while (word[i] != '\0')
		{
			if (word[i] == str[j])
			{
				i++; j++;
			}
			else
			{
				j++; break;
			}
			if (i == len)
			{
				p++; j = j - (i - 1);
			}

		}
	}
	return p;
}