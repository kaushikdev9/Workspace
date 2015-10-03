#include <stdio.h>
#include <iostream>
#include "Utilities.h"
using namespace std;

char MaxOccuringChar(char* str)
{
	int alphabets[256] = {0};
	
	for(int i=0;*(str+i);i++)
	{
		alphabets[*(str+i)]++;
	}
	
	int maxIndex =0;
	for(int i=1;i<256;i++)
	{
		if(alphabets[i] > alphabets[maxIndex])
		{
			maxIndex = i;
		}
	}
	
	return maxIndex;
}

void TestMaxOccuringChar()
{
	PrintHeader("Max Occuring Char");
	
	char str[] = "test sample";
	cout<<MaxOccuringChar(str);
	
	PrintFooter("Max Occuring Char");
}
