#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	   int b,c;
   	   cin>>b>>c;
   	   int s[b+2];
   	   for(int j=1;j<=b;j++){
   	   	   cin>>s[j];
		}
		int t=0;
		for(int j=b;j>=1;j--){
			if(s[j]==c){
				t=j;
			}
		}
		cout<<t<<endl;	  
   }
}

