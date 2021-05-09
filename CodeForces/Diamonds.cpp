#include<iostream>
int diamonds(int n , int t){
    std::cin>>t;
    while(t--){
        std::cin>>n;
        std::cout<<n<<std::endl;
    }
}
int main()
{
    int n, t;
    diamonds(n, t);
    return 0;
}
