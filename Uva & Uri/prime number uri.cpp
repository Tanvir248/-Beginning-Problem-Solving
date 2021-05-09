#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;

int main(){
    int n, tanvir,i;
    long int s;
    cin>>n;
    while(n--){
            tanvir = 0;
            cin>>s;
             if(s<=2){
            if(s == 0){
                 cout<<"Not Prime"<<endl;
                 continue;
            }
            if(s == 1){
                 cout<<"Not Prime"<<endl;
                 continue;
            }
            if(s == 2){
                 cout<<"Prime"<<endl;
                 continue;
            }
          }
           else{
            for(i = 2; i < sqrt(s)+1; i++){
                    if(s%i == 0) tanvir++;
                    if(tanvir == 2) break;
            }
            if(tanvir >= 1) cout<<"Not Prime"<<endl;
            else
                cout<<"Prime"<<endl;
       }
    }
    return 0;
}

