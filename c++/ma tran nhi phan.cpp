#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   int s[a][3];
   for(int i=0;i<a;i++){
   	  	for(int j=0;j<3;j++){
   	  	 	cin>>s[i][j];
		}
    } 
    int dem=0,dem1=0,dem2=0;
    for(int i=0;i<a;i++){
    	dem=0;
    	dem1=0;
   	  	for(int j=0;j<3;j++){
   	  	 	if(s[i][j]==1){
   	  	 		dem++;
			}
			else{
				dem1++;
			}
		}
		if(dem>dem1){
			dem2++;
		}
    }
	cout<<dem2<<endl; 
}

