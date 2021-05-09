#include <iostream>
int taxi(int *arr, int i, int n, int x){
    
    //std::cin>>n;
    for(i=0; i<n; i++){
        std::cin>>arr[i];
        x += arr[i];
    }
    if(x%4==0){
        return x/4;
    }
    else if(x%4 !=0){
        return (x/4)+1;
    }
}
int main(){
    int n, i, arr[1001];
    int a=0;
    int x;
    std::cin>>n;
    x = taxi(arr, i , n,a);
    std::cout<<x<<std::endl;
    return 0;
    
}
