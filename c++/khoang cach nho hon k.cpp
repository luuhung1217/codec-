#include<bits/stdc++.h>
using namespace std;
void nhap(int s[],int a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
   	int a,k;
   	 cin>>a>>k;
   	 int s[10000];
   	 nhap(s,a);
   	 int dem=0;
   	 for(int j=0;j<a-1;j++){
   	 	for(int t=j+1;t<a;t++){
   	 		if(s[t]+s[j]==k){
   	 			dem++;
			}
		}
		
	 }cout<<dem<<endl;
   }
}

