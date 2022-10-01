#include<bits/stdc++.h>
using namespace std;
int chia(int n,int k){
	for(int j=1;j<k;j++){
   	  	 	if((n*j)%k==1){
		 		return j;
			 }  	
		}
		return -1;
}
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	  	int n,k;
   	  	cin>>n>>k;
	    cout<<chia(n,k);
	    cout<<endl;
   }
}

