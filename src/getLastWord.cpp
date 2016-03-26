/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

char * get_last_word(char * str){

	int len = 0, i, j, k, s = 0, flag = 0, *b;
	char *str1, *str2;
	b = (int *)calloc(256, sizeof(int));

	for (i = 0; str[i] != '\0'; i++)
	{
		len++; b[str[i]]++;
	}

	str1 = (char *)malloc(len*sizeof(char));
	str2 = (char *)malloc(len*sizeof(char));
	if (b[32] == len)
	{
		str1 = "";  return str1;
	}
	i = 0; j = len - 1;
	if (str[i] == ' ')
	{
		while (str[i] == ' ')
		{
			i++;
		}
	}
	if (str[j] == ' ')
	{
		while (str[j] == ' ')
		{
			j--;
		}
	}

	for (k = 0; str[k] != '\0'; k++)
	{
		if ((k >= i) && (k <= j))
		{
			str1[s] = str[k]; s++;
		}
	}
	str1[s] = '\0'; k = 0; len = 0; j = 0;


	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}
	i = len;
	while (str1[i] != ' ')
	{
		i--;
		if (i == 0) {
			flag = 1; break;
		}
	}
	if (flag != 1)
	{
		i++;
	}
	for (k = i; str1[k] != '\0'; k++)
	{
		str2[j] = str1[k]; j++;
	}
	str2[j] = '\0';

	return str2;

}
