#include<bits/stdc++.h>
using namespace std;
int main (){
  long long a;
  cin>>a;
  int count;
  while(a%2==0){
  	count++;
  	a/=2;
  }
  if(count!=0){
  		cout<<"2"<<" "<<count<<endl;
	  }
  int dem;
  for(int i=3;i<=sqrt(a);i+=2){
  	 dem=0;
  	while(a%i==0){
  		a/=i;
  		dem++;
	  }
	  if(dem!=0){
	  	cout<<i<<" "<<dem<<endl;
	  } 
  }
  if(a>1){
	  	cout<<a<<" "<<"1"<<endl;
	  }  
}

