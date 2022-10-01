#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
long long bscnn(long long a,long long b){
	return a*b/uscln(a,b);
}
int main (){
	int n;
	cin>>n;
	while(n--){
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long x=pow(10,d);
		long long k=bscnn(bscnn(a,b),c);
		if(x<=k){
			cout<<"-1"<<endl;
			
		}
		else{
			long long mu=pow(10,d-1);
			long long x1=pow(10,d-1)/k;
			if(x1*k>=mu){
				cout<<x1*k<<endl;
			}else{
				cout<<(x1+1)*k<<endl;
			}
		}	
	}

}

