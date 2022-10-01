#include<iostream>
#include<math.h>
using namespace std;
const long long k=1e9+7;
int n;
long a;
long f[1001];
int main (){
    cin>>n;
    while(n--){
    	cin>>a;
    	f[0]=0;
    	f[1]=1;
    	for(long j=2;j<=a;j++)
    		f[j]=(f[j-1]%k)+(f[j-2]%k);
		cout<<f[a]%k<<endl;
	}
}

