#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int a,b;
		cin>>a>>b;
		int s[a],x[b];
		set<int>Un;
		set<int>In;
		for(int i=1;i<=a;i++){
			cin>>s[i];
			Un.insert(s[i]);
		}
		for(int i=1;i<=b;i++){
			cin>>x[i];
			if(Un.find(x[i])!=Un.end()){
				In.insert(x[i]);
			}
		}
		for(int i=1;i<=b;i++){
			Un.insert(x[i]);
		}
		for(int j:Un){
			cout<<j<<" ";
		}
		cout<<endl;
		for(int t:In){
			cout<<t<<" ";
		}
		cout<<endl;
	}
}

