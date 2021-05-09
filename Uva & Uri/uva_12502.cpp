#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    while(n--)
    {
        double A, B, money;
        cin>>A>>B>>money;

       double x= money/(A+B);
        A *= x;
        B *= x;
        double y= A-B;
        int z = A+y;
        cout<<z<<endl;
    }
    return 0;
}
