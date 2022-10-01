#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	  long long b;
   	  cin>>b;
   	  long long s[b];
   	  for(int j=0;j<b-1;j++){
   	  	cin>>s[j];
		}
		long long sum=0;
		for(int j=0;j<b-1;j++){
   	  	    sum+=s[j];
		}
		cout<<(b*(b+1))/2-sum<<endl;
		
   }
}

