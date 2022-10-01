#include<bits/stdc++.h>
using namespace std;
int main (){
  int a;
  cin>>a;
  int b;
  for(int i=1;i<=a;i++){
  	cin>>b;
  	if(b==1){
  		cout<<"1"<<endl;
	}
	else{
		long long f,f1=0,f2=1;
		for(int j=1;j<b;j++){
			f=f1+f2;
			f1=f2;
			f2=f;
		}
		cout<<f<<endl;
	}
  }
}

