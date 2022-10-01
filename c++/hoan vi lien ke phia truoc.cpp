#include<bits/stdc++.h>
using namespace std;
void nhap(int s[],int a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
 int a;
 cin>>a;
 for(int i=1;i<=a;i++){
 	int b;
 	cin>>b;
 	int s[1000];
 	nhap(s,b);
 	for(int j=0;j<b-2;j++){
 		cout<<s[j]<<" ";
	 }
	 for(int j=b-1;j>=b-2;j--){
	 	cout<<s[j]<<" ";
	 }
	 cout<<endl;
 }
}

