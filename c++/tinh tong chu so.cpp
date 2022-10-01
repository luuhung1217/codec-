#include<bits/stdc++.h>
using namespace std;

int main (){
   int n;
   cin>>n;
   int a;
   for(int i=1;i<=n;i++){
   	 cin>>a;
   	 while(a>9){
		int b=0;
		while(a>0){
		b+=a%10;
		a/=10;
		}
		a=b;
    }
   	 cout<<a<<endl;
   }
}

