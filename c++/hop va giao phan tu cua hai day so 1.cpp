#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int n,k;
		cin>>n>>k;
		int s[n],x[k];
		set<int>Un;
		set<int>In;
		for(int i=1;i<=n;i++){
			cin>>s[i];
			Un.insert(s[i]);
		}
		for(int i=1;i<=k;i++){
			cin>>x[i];
			if(Un.find(x[i])!=Un.end()){
				In.insert(x[i]);
			}
		}
		for(int i=1;i<=k;i++){
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

