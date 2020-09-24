



//Write a Program to reverse a string

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char S[100];
  	int i, len;
 
  	printf("\n Please Enter any String of your choice :  ");
  	gets(S);
  	
  	len = strlen(S);
  	
 	printf("\n After Reversing  Your String : "); 
  	for (i = len - 1; i >= 0; i--)
  	{
  		printf("%c", S[i]);
  	}

  	return 0;
}