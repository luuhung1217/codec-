#include<bits/stdc++.h>
using namespace std;
long long nt(long long a){
	if(a==1){
		return 1;
	}
	for(int i=2;i<=a;i++){
		if(a%i==0)
			return i;
		
	}
}
int main (){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  	long long a;
  	 cin>>a;
  	 for(int j=1;j<=a;j++){
  	 	cout<<nt(j)<<" ";
	   }
	   cout<<endl;
  }
}


