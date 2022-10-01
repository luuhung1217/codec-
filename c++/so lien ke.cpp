#include<bits/stdc++.h>
using namespace std;
long long lk(long long a){
	int b[20],j;
	while(a>0){
		b[j]=a%10;
		a/=10;
		j++;
	}
	int dem=0;
	for(int i=0;i<j-1;i++){
		if(b[i]-b[i+1]!=1&&b[i]>=b[i+1]||b[i+1]-b[i]!=1&&b[i]<=b[i+1]){
			dem++;
		}
	}
	if(dem==0){
		return 1;
	}
		return 0;
	
}
int main (){
    int n;
  cin>>n;
  long long a;
  for(int i=1;i<=n;i++){
  	cin>>a;
  	if(lk(a)){
  		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
  }
}

