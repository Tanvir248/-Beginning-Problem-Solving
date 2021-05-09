#include <iostream>
long long int divide(long long int n){
    if(n%5==0)
        return n/5;
    else
        return (n/5)+1;
}
int main()
{
    long int a;
    std::cin>>a;
    long int x = divide(a);
    std::cout<<x<<std::endl;
}
