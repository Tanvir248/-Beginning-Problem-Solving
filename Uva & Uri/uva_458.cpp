#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char c;
    while(scanf("%c", &c) != EOF){
        if(c!= '\n'){
            cout<<c-7<<endl;
        }
        else
            cout<<"\n"<<endl;
    }
    return 0;
}
