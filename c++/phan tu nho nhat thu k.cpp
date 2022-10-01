#include<bits/stdc++.h>
using namespace std;
void sx(int s[],int a){
	long long tmp=0;
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(s[i]>s[j]){
			tmp=s[i];
			s[i]=s[j];
			s[j]=tmp;
			}
		}	
	}
}
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
   	   int s[100000];
   	   nhap(s,a);
   	   sx(s,a);
   	   cout<<s[k-1]<<endl;
   }
}

