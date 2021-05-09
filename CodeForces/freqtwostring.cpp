
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
  	char a[100];
  	int i;

  	int freq[256] = {0};

  	printf("\n Please Enter any String :  ");
  	 scanf("%[^\n]%*c", a);


  	for(i = 0; a[i] != '\0'; i++)
  	{
  		freq[a[i]]++;
	}

  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			printf("This '%c' here %d Times \n", i, freq[i]);
		}
	}

  	return 0;
}
