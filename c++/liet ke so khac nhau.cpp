#include<bits/stdc++.h>
using namespace std;
void sx(int s[],int a){
	int tmp=0;
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
	for(int i=0;i<a;i++)
		cin>>s[i];
}
int main (){
 	int a;
	 cin>>a;
 	int s[1000];
 	nhap(s,a);
 	sx(s,a);
 	for(int i=0;i<a;i++){
 	    if(s[i]==s[i+1]){
 	    	s[i]=-1;
		 }
		 if(s[i]!=-1){
		 	cout<<s[i]<<" ";
		 }
 	}	
}

