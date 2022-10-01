#include<iostream>
#include<math.h>
using namespace std;
int nto(int n){
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			return 0;
			
		}
	return 1;
}

int main(){
	int a,b;
	cin >> a >> b;
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(int i=a;i<=b;i++){
		if(nto(i))
			cout << i << " ";
	}
	return 0;
}
