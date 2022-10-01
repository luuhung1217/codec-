#include<bits/stdc++.h>
using namespace std;
void nhap(long long s[],long long n){
	for(int i=0;i<n;i++){
		cin>>s[i];
	   }
}
void sx(long long k[],int b){
	int tmp=0;
	for(int i=0;i<b-1;i++){
		for(int j=i+1;j<b;j++){
			if(k[i]>k[j]){
				tmp=k[i];
				k[i]=k[j];
				k[j]=tmp;
			}
		}
	}
}
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	   int n,m;
   	   cin>>n>>m;
   	   long long s1[n],s2[m];
   	   nhap(s1,n);
   	   nhap(s2,m);
   	   int c=n+m;
   	   long long k[c];
		for(int j=0;j<c;j++){
		     if(j<n){
		     	k[j]=s1[j];
			 }
			 else{
			 	k[j]=s2[j-n];
			 }	
		}
		sx(k,c);
			for(int t=0;t<c;t++){
		     	cout<<k[t]<<" ";
			}
		cout<<endl;
    }
}

