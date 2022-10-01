#include<bits/stdc++.h>
using namespace std;
long long phepchia(long long a, long long b,long long M){
	long long kq=1;
	while(b>0){
		if(b%2==1)
			kq*=a%M;
		a*=a;
		b/=2;
	}
	return kq%M;
} 
int main(){
	int test;
	cin>>test;
	while(test--){
		long long a,b,M;
		cin>>a>>b>>M;
		cout<<phepchia(a,b,M)<<endl;
	}

}

