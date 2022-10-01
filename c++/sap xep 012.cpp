#include<bits/stdc++.h>
using namespace std;
void sx(long long s[],long long a){
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
void nhap(long long s[],long long a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  	 long long a;
  	 cin>>a;
  	 long long s[100000];
  	 nhap(s,a);
  	 sx(s,a);
  	 for(int j=0;j<a;j++){
  	 	cout<<s[j]<<" ";
	   }
  	 cout<<endl;
  }
}

