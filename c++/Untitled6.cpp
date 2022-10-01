#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   int b,c;
   for(int i=1;i<=a;i++){
   		cin>>b>>c;
   		int dem=0,kt=-1;
   		for(int j=2;j<=b;j++){
   			while(b%j==0){
   				dem++;
   				if(dem==c){
				kt=j;
				break;
			    }
			    b/=j;
			}
		}
       cout<<kt<<endl;
   }
}

