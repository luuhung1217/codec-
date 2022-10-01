#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		long long s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		long long kt=0;
		long long kq=s[0]; 
		for(int i=0;i<n;i++){
			kt=max(s[i],kt+s[i]);
			kq=max(kq,kt); 
		}
		cout<<kq<<endl; 
	}
}

