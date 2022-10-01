#include<bits/stdc++.h>
using namespace std;
int mayman(long long n){
	int a[12],dem=0,Dem=0,i=0;
	while(n>0){
		a[i]=n%10;
		n=n/10;
		i++;
		dem++;
	}
	for(int i=0;i<dem;i++){
		if(a[0]==6 && a[1]==8)
			Dem++;
	}
	if(Dem==0)
		return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << mayman(n) << endl;
	}
	return 0;
}
