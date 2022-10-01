#include<bits/stdc++.h>
using namespace std;
int main (){
  int a;
  cin>>a;
  long long b;
  for(int i=1;i<=a;i++){
  	cin>>b;
  	long long dem=0;
  	if(b%2==0){
  		dem++;
	}
	int k=sqrt(b);
	if(k%2==0&&k*k==b){
		dem++;
	}
	for(int j=2;j<sqrt(b);j+=1){
	    if(b%j==0){
		    if(j%2==0){
			    dem++;
		    }
		    if((b/j)%2==0){
			    dem++;
		    }
	    }
	}
	cout<<dem<<endl;
  }
}
