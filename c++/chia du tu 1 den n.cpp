#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	  int n;
   	  long long k,s=0;
   	  cin>>n>>k;
   	  for(int j=1;j<=n;j++){
   	  	s+=j%k;
		 }
		 cout<<s<<endl;
   }
}

