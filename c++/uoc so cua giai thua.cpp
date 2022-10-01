#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	   int b,p;
   	   cin>>b>>p;
   	   int dem=0;
   	   for(int j=p;j<=b;j+=p){
   	   	  int m=j;
   	   	  	while(m%p==0){
   	   	   	m/=p;
   	   	   	dem++;
   	   	   	cout<<p<<" ";
			}
		}
		cout<<dem<<endl;
   }
}

