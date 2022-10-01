#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a;
	for(int i=1 ;i<=n ;i++){
		cin>>a;
		if(a==0||a==1){
			cout<<"YES"<<endl;
		}
		else{
				long long f1=0,f2=1,f3=1;
		while(f3<a){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		if(f3==a){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		}
	
	}
   
}

