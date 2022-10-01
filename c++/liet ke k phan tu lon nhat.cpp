#include<bits/stdc++.h>
using namespace std;
void sx(int s[],int a){
	long long tmp=0;
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(s[i]<s[j]){
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
int a;
cin>>a;
int b,c;
	for(int i=1;i<=a;i++){
		cin>>b>>c;
		int s[1000];
		nhap(s,b);
		sx(s,b);
		for(int j=0;j<c;j++){
			cout<<s[j]<<" ";
		}
		cout<<endl;
	}
}

