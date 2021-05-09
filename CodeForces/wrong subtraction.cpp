#include <iostream>
int main()
{
    long long int a, b;
    std::cin>>a>>b;
    for(int i=0; i<b; i++){
        if(a%10==0){
            a = a/10;
        }else{
            a--;
        }
    }
    std::cout<<a<<std::endl;
    return 0;
}
