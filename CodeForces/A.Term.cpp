#include<iostream>
using namespace std;
int main()
{
    int exit, enter, all=0, passenger=0;
    int a;
    cin>>a;
    while(a--){
        cin>>exit>>enter;
        passenger -=exit;
        passenger +=enter;
        all = max(all, passenger);
    }
    cout<<all<<endl;
    return 0;
}
