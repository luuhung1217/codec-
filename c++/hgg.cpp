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
		int so=0;
		for(int i=1;i<=k;i++){
			cin>>x[i];
			Un.insert(x[i]);
			if(n+i-Un.size()!=so){
				In.insert(x[i]);
				so++;
			}
		}
		for(int j:Un){
			cout<<j<<" ";
		}
		for(int t:In){
			cout<<t<<" ";
		}
		cout<<endl;
	}
}

