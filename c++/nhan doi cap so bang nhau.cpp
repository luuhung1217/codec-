#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	  int n;
   	  cin>>n;
   	  long long  s[100000];
   	  	for(int j=0;j<n;j++){
   	  	 cin>>s[j];
		}
		int dem=0;
		for(int j=0;j<n-1;j++){
			if(s[j]==s[j+1]){
				s[j]=2*s[j];
				s[j+1]=0; 
			}
		}
		for(int j=0;j<n;j++){
			if(s[j]!=0){
				dem++; 
				cout<<s[j]<<" ";
			}	
			
		}
		for(int j=0;j<n-dem;j++){
			cout<<"0"<<" ";
		}
		cout<<endl;
   }
}

