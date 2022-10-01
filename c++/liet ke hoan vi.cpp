#include<bits/stdc++.h>
using namespace std;
int n,s[25],k[25];
void in(){
	for(int i=1;i<=n;i++)
	    cout<<s[i];
	    cout<<" ";
}
void hoanvi(int a){
	if(a>n) in();
	for(int i=1;i<=n;i++)
	    if(k[i]==0){
	    	s[a]=i;
			k[i]=1;
	    	hoanvi(a+1);
	    	k[i]=0;
		}	
}
int main (){
     int c;
     cin>>c;
     while(c--){
     	cin>>n;
     	for(int i=1;i<=20;i++)
     	    k[i]=0;
     	hoanvi(1);
     	cout<<endl;
	 }
}

