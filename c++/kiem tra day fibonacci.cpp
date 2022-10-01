#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	long long f=0,f1=1,f2=1;
	if(n==1||n==0){
		return 1;
	}
	else{
		while(f2<n){
			f2=f+f1;
			f=f1;
			f1=f2;
		}
		if(f2==n){
			return 1;
		}
		return 0;
	}
}
int main (){
  int a;
  cin>>a;
  int b,s[100];
  for(int i=1;i<=a;i++){
  	cin>>b;
  	for(int j=0;j<b;j++){
  		cin>>s[j];
	  }
	for(int j=0;j<b;j++){
		if(fib(s[j])){
			cout<<s[j]<<" ";
		}
	}
	cout<<endl;
  }
}

