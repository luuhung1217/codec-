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
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int n;
    	cin>>n;
    	int s[1000];
    	nhap(s,n);
    	sx(s,n);
    	int tmp=s[n-1]-s[n-2];
    	for(int j=0;j<n-1;j++){
    		if(s[j+1]-s[j]<tmp){
    			tmp=s[j+1]-s[j];
			}
		}
		cout<<tmp<<endl;
	}
}

