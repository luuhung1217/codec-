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
	for(int i=0;i<a;i++){
		int n,k;
		cin>>n,k;
		long long s[100000];
		nhap(s,n);
		sx(s,n);
		for(int j=k;j<n-k+1;j++){
			cout<<s[j]<<" ";
		}
		cout<<endl;
	}
}

