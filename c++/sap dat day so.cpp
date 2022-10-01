#include<bits/stdc++.h>
using namespace std;
void nhap(long long s[],long long n){
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
}
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	 long long b;
   	 cin>>b;
   	  long long s[b];
   	  nhap(s,b);
   	  long long c[1000000];
   	  for(int j=0;j<b;j++){
   	  	 c[j]={-1};
   	  	 for(int k=0;k<b;k++){
   	  	 	if(j==s[k]){
   	  	 		c[j]=j;
			}
			  }
		 }
		 for(int j=0;j<b;j++){
		 	cout<<c[j]<<" ";
		 }
		 cout<<endl;
   }
}

