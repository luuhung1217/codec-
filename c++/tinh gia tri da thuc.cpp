#include<bits/stdc++.h>
using namespace std;
const long long t=1e9+7;


int main (){
  int a;
  cin>>a;
  for(int i=1;i<=a;i++){
  	int n,x;
  	cin>>n>>x;
  	int s[10000];
     for(int j=0;j<n;j++){
     	cin>>s[j];
	 }
	 long long sum=0;
	 for(int j=0;j<n;j++){
	 	 long long d=1;
	 	for(int k=n-j-1;k>0;k--){
	 		d=(d*x)%t;
		 }
		 sum+=d*s[j];
	 }
	 cout<<sum%t<<endl;
  }
}

