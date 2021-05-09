//Day 0: Hello, World.

#include <iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char arr2[] = {"Welcome to 30 Days of Code!"};
    char arr1[101];
    scanf(" %[^\t\n]s",&arr1);
    if(strcmp(arr1, arr2)== strcmp(arr2, arr1)){
        cout<<"Hello, World."<<endl<<arr2<<endl;
    }
}

