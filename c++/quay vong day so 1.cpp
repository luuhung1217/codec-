#include<bits/stdc++.h>
using namespace std;
void nhap(int s[],int a ){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
     	int a,b,s[1000000];
     	cin>>a>>b;
     	nhap(s,a);
     	for(int j=b;j<a;j++){
     		cout<<s[j]<<" ";
		}
		for(int j=0;j<b;j++){
			cout<<s[j]<<" ";
		}
		cout<<endl;
	 }
}
