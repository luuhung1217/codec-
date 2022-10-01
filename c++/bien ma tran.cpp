#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	  int b;
   	  cin>>b;
   	  int s[150][150];
   	   for(int j=0;j<b;j++){
   	   	    for(int k=0;k<b;k++){
   	   	   	    cin>>s[j][k];
			}
		}
		for(int j=0;j<b;j++){
   	   	    for(int k=0;k<b;k++){
   	   	   	    if(k==0||j==0||j==b-1||k==b-1){
   	   	   	    	cout<<s[j][k]<<" ";
				}
				else{
					cout<<"  ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
   }
}

