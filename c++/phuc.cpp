#include<iostream>
#include<math.h>
using namespace std;
int nto(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,dem=0;
		cin >> a ;
			for(int i=2;i<=a;i++){
				if(nto(i) && nto(a-i)){
					cout << i << " " << a-i ;
					dem++;
					break;
				}
			}
			if(dem==0){
			}
		cout << "\n" ;
	}
	return 0;
}
