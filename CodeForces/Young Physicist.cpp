#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    double d=4.0;
    char arr1[101];
    int n, i=4;
    char arr[]= {"HackerRank"};
    
    
    std::cin>>n;
    std::cin>>a;
    getchar();
    scanf("%[^\t\n]s",&arr1);//take input with space...
    
    std::cout<<n+i<<std::endl;                 //console out 1st input...
    printf("%.1lf\n", a+d);                    //console out second input...
    std::cout<<arr<<" "<<arr1<<std::endl;     //console out third input...
}

