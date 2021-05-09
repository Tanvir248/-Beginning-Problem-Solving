#include<iostream>
using namespace std;
void solve(){
	int V, T, S, D;
	cin>>V>>T>>S>>D;
	
	int ans1 = V*T;
	int ans2 = V*S;
	if(D<ans1 || D>ans2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

}
int main(){
	solve();
	return 0;
}