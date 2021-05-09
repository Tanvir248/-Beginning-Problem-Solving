#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char b[4];
    int a=0, c=0;
    cin>>a;
    for(int i=1; i<=a; i++){
            int s;
        cin>>b;

        if(strcmp(b,"X++")==0|| strcmp(b,"++X")==0 ){
            c++;
        }
        else if(strcmp(b,"X--")==0|| strcmp(b,"--X")==0)
        {
            c--;
        }
    }
    cout<<c<<endl;
    return 0;
}
