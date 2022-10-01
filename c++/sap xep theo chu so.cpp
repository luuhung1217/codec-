#include<bits/stdc++.h>
using namespace std;
bool sapxep(int a,int b){
	return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
int main(){
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n,sapxep);
		for(int i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
}

