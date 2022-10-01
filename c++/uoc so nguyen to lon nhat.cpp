#include<bits/stdc++.h>
using namespace std;
void uoc(long long a){
	long long max;
	while(a%2==0){
		max=2;
		a/=2;
	}
	for(int i=3;i<=sqrt(a);i+=2){
		while(a%i==0){
			max=i;
			 a/=i;
		}
	}
	if(a>1) max=a ;
	cout<<max<<endl;
}
int main (){
     int a;
     cin>>a;
     long long b;
     for(int i=1;i<=a;i++){
     	cin>>b;
     	uoc(b);
     	cout<<endl;
	 }
}

