#include<bits/stdc++.h>
using namespace std;
void sx(long long s[],int a){
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
void nhap(long long s[],int a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
    int a;
    cin>>a;
    int n,m;
    for(int i=1;i<=a;i++){
	long long s[1000000],b[1000000];
    	cin>>n>>m;
    	nhap(s,n);
    	sx(s,n);
    	nhap(b,m);
    	sx(b,m);
    	cout<<s[n-1]*b[0]<<endl;
	}
}

