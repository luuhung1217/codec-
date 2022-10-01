#include<bits/stdc++.h>
using namespace std;
int main (){
	int a;
	cin>>a;
  int x,y;
  long long p;
  for(int i=1;i<=a;i++){
  	cin>>x>>y>>p;
  	long long binh=1;
  	for(int j=0;j<y;j++){
  		binh=(binh*x)%p;
	  }
  	cout<<binh<<endl;
  }
}

