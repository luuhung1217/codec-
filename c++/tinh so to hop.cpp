#include<iostream>
#include<math.h>
using namespace std;
const long long k=1e9+7;
 long a;
long long gt(long n){
	long long tan=1;
	for(int i=1;i<=n;i++){
		tan*=i;
	}
	return tan;
}
int main (){
    cin>>a;
    while(a--){
    	long n,r;
    	cin>>n>>r;
    	long long so=(gt(n)%k)/((gt(n-r)*gt(r))%k);
    	cout<<so%k<<endl;
	}
}
