#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   int b;
   for(int i=1;i<=a;i++){
   	cin>>b;
   	
   	for(int j=2;j<=b;j++){
   		int dem=0;
   		while(b%j==0){
   			b/=j;
   			dem++;
		   }
		   if(dem){
		   	cout<<j<<" "<<dem<<" ";
		}
	}
	cout<<endl;
   }
}

