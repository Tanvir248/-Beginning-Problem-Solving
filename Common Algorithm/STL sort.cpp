#include<stdio.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n, i;
    char s[100];
    vector<string>v;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", s);
        v.push_back(s);
    }
    sort(v.begin() , v.end());
    return 0;
}
