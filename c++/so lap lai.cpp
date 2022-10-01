#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
int main (){
     int a;
     cin>>a;
     for(int i=1;i<=a;i++){
     	long long k,b,c;
     	cin>>k>>b>>c;
     	long long x=uscln(b,c);
     	for(int j=0;j<x;j++){
     		cout<<k;
		 }
		 cout<<endl;
	 }
}

