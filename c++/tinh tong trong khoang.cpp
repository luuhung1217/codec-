#include<bits/stdc++.h>
using namespace std;
void nhap(int s[],int a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  	int a,k,l,r;
  	cin>>a>>k;
  	int s[1000];
  	nhap(s,a);
  	
  	for(int j=0;j<k;j++){
  		long long sum=0;
  		cin>>l>>r;
  		for(int t=l-1;t<r;t++){
  		    sum+=s[t];	
		}
		cout<<sum<<endl;
	}
	
  }
}

