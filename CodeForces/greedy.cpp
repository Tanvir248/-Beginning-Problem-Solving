#include<iostream>
using namespace std;
int main()
{
    int n=0, a=0;
    cin>>n;
    while(n--){
        int f1, f2, f3;
        cin>>f1>>f2>>f3;
        if (f1 + f2 + f3 >= 2){
                a++;}
    }
        cout<<a;
    return 0;
}
