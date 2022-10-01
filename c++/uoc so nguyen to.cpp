#include<bits/stdc++.h>
using namespace std;
void uoc(long long a ){
	while(a%2==0){
		cout<<2<<" ";
		a/=2;
	}
	for(int i=3;i<=sqrt(a);i+=2){
		while(a%i==0){
			cout<<i<<" ";
			a/=i;
    	}
	}
	 cout <<a<<endl;
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

