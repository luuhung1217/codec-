#include<bits/stdc++.h>
using namespace std;
int main (){
  int a;
  cin>>a;
  while(a--){
  	int n;
  	cin>>n;
  	int s[100000];
  	for(int i=0;i<n;i++){
  		cin>>s[i];
	  }
	  int max=-1;
	  for(int i=0;i<n-1;i++){
	  	for(int j=i+1;j<n;j++){
	  		if((s[j]-s[i])>max){
	  			max=s[j]-s[i];
			  }
		  }
	  }
	  cout<<max<<endl;
  }
}

