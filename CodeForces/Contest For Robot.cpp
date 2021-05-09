#include<iostream>
using namespace std;
int main()
{
    int a[101], b[101];
    int n=0, c=0;
    cin>>n;
    while(n--){
        cin>>a[101]>>b[101];
        if(a[101]==b[101]){
            cout<<-1<<endl;}
        else if(a>b || a<b)
        {
            a[101]++;

        }

    }
  cout<<a<<endl;
    return 0;
}
