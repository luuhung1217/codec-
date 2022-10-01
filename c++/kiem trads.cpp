#include<bits/stdc++.h>
using namespace std;
long long tong(long long a){
	int sum=0;
	while(a%2==0){
  		a/=2;
  		sum+=2;
  	}
  	for(int i=3;i<=sqrt(a);i+=2){
  		while(a%i==0){
  			a/=i;
  			sum+=i;
	  	}
  	}
  if(a>1) sum+=a;
   return sum;
}
int main (){
  	long long a;
  	cin>>a;
  	long long tong1=0;
  	long long s[a];
   	for(int i=0;i<a;i++){
  	 	cin>>s[i];
   	}
  	for(int i=0;i<a;i++){
  		tong1+=tong(s[i]);
  	}
  	cout<<tong1;
}

