#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int tests;
    scanf("%d", &tests);
    char arr[10000];
    for(int k = 0; k < tests; k++) {
        cin>>arr;
        
        for(int i = 0; i < strlen(arr); i += 2) {
            cout<<arr[i];
        }
        cout<<" ";
        for(int i=1; i<=strlen(arr); i+= 2){
            
            cout<<arr[i];
        }
    }
    return 0;
}
