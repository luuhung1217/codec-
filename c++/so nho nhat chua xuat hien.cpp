#include<bits/stdc++.h>
using namespace std;
int main (){
 int a;
 cin>>a;
 for(int i=1;i<=a;i++){
 	int b;
 	cin>>b;
 	int s[100000];
 	int nn=1;
 	for(int j=1;j<=b;j++){
 		cin>>s[j];
	 }
	 for(int j=1;j<=b;j++){
 		if(s[j]<0){
 			s[j]=0;
		}
		if(s[j]==nn){
			nn++;
		}
	 }
	 cout<<nn<<endl;
 }
}

