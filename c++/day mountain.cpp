#include<bits/stdc++.h>
using namespace std;
int dem1(int s[],int t,int n){
	int dem=0;
	for(int i=t;i<=n;i++){
		if(s[i]<=s[i+1]){
			dem++;
		}
	}
	return dem;
}
int tang(int s[],int t,int n){
	for(int i=t;i<n;i++){
		if(s[i]>s[i+1]){
			return 0;
		}
	}
	return 1;
}
int giam(int s[],int t,int n){
	for(int i=t;i<n;i++){
		if(s[i]<s[i+1]){
			return 0;
		}
	}
	return 1;
}
int chitang(int s[],int t,int n){
	for(int i=t;i<n;i++){
		if(s[i]>s[i+1]){
			return 0;
		}
	}
	return 1;
}
int chigiam(int s[],int t,int n){
	for(int i=t;i<n;i++){
		if(s[i]<s[i+1]){
			return 0;
		}
	}
	return 1;
}
void kt(int s[],int l,int r){
	int dem=dem1(s,l,r);
	if(chitang(s,l,r)==1||chigiam(s,l,r)==1){
		cout<<"YES"<<endl;
	}
	else if(tang(s,l,dem-1+l)==1&&giam(s,dem-1,r)==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int l,r;
		cin>>l>>r;
		kt(s,l,r);
		//cout<<dem1(s,l,r)<<endl;
	}
}

