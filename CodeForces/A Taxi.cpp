#include<iostream>
int main()
{
   long int arr[100000]], t, i;
    int x=0;
    std::cin>>t;
    for(i=0; i<t; i++){
        std::cin>>arr[i];
        x+=arr[i];
    }if(x%4==0){
        std::cout<<x/4<<std::endl;
    }else if(x%4 !=0){
        std::cout<<(x/4)+1<<std::endl;
    }
    //std::cout<<x<<endl;
    return 0;
}
