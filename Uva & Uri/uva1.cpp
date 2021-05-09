#include<iostream>
using namespace std;
int main()
{
    int s=0, n, m, i=1, x,y,a;

    while((cin>>s)==1){
        cin>>n>>m;
        n /=3;
        m /=3;
        a= n*m;
        cout<<"Case "<<i++<<": "<<a<<endl;
    }
    return 0;
}
