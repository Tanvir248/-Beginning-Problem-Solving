#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[101], b[101];
    cin>>a;
    strlwr(a);
    cin>>b;
    strlwr(b);
    if(strcmp(a, b)== strcmp(b, a)){
        cout<<0<<endl;
    }
    else if(strcmp(a, b)< strcmp(b, a)){
        cout<<-1<<endl;
    }
    else
        cout<<1<<endl;
    return 0;

}
