#include<bits/stdc++.h>
using namespace std;
int chan(char b[],int x){
	int s[5000],j=0;
	for(int i=0;i<x;i++){
	 	if(b[i]>='1'&&b[i]<='9'){
	 		s[j]=b[i];
	 		j++;
		 }
	}
	for(int i=0;i<j;i++){
		s[i]-=48;
		if(s[i]%2==0){
			return 1;
		}
		return 0;
	}
	
}
int tn(char b[],int x){
	for(int i=0;i<x/2;i++){
		if(b[i]!=b[x-i-1]){
			return 0;
		}
	}
	return 1;
}
int main (){
  int a;
  cin>>a;
  for(int i=1;i<=a;i++){
  	 char b[500];
  	 cin>>b;
  	 int x=strlen(b);
  	 if(chan(b,x)&&tn(b,x)){
  	 	cout<<"YES"<<endl;
	   }
	else{
		cout<<"NO"<<endl;
	}
  }
}

