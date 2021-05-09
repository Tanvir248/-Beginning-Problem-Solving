 #include<iostream>
using namespace std;
int main()
{
    int t;
    int c=0, count=0;
    int number;
    cin>>t;
    while(t--){
        cin>>number;
        
        if(number>0) {
            number +=c;
            count++;}
    }
    //cout<<count<<endl;
    if(count==1|| count>1){
        cout<<"Hard"<<endl;
        
    }
    if(count ==0 ){
        cout<<"EASY"<<endl;
    }
    return 0;
}
