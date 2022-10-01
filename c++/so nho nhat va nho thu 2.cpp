#include<bits/stdc++.h>
using namespace std;
void sx(long long s[],long long b){
	int tmp=0;
	for(int i=0;i<b-1;i++){
		for(int j=i+1;j<b;j++){
			if(s[i]>s[j]){
			tmp=s[i];
			s[i]=s[j];
			s[j]=tmp;
			}
		}	
	}
}

int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	long long b;
   	cin>>b;
   	  long long s[b];
	for(int j=0;j<b;j++){
		cin>>s[j];
	  }
   	  sx(s,b);
   	  int dem=0;
   	  for(int j=0;j<b-1;j++){
   	  	if(s[j]!=s[j+1]){
   	  		dem++;
			 }
		 }
		 if(dem!=0){
		 	cout<<s[0]<<" "<<s[1]<<endl;
		 }
		 else if(dem==0){
		 	cout<<"-1"<<endl;
		 }
   }
}

