#include<bits/stdc++.h>
using namespace std;
void uoc(long long a){
	long long dem=0;
	while(a%2==0){
		a/=2;
		dem++;
	}
	for(int i=3;i<=sqrt(a);i+=2){
		while(a%i==0){
			a/=i;
			if(i%2==0){
				dem++;
			}
		}
	}
	 cout<<dem;
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

