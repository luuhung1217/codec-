#include<bits/stdc++.h>
using namespace std;
int kt(int a){
	int j=0,s[10];
	while(a>0){
		s[j++]=a%10;
		a/=10;
	}
	for(int i=0;i<j;j++){
		if(s[i]==0||s[i]==6||s[i]==8||s[i]==0&&s[i]==8||s[i]==0&&s[i]==6||s[i]==6&&s[i]==8||s[i]==0&&s[i]==8&&s[i]==6){
			return 1;
		}
		return 0;
	}
	
}
int main (){
   int n;
   cin>>n;
   int b;
   for(int i=1;i<=n;i++){
   	cin>>b;
   	if(kt(b)){
   		cout<<"YES"<<endl;
	}
    else{
    	cout<<"NO"<<endl;
	}
   }
}

