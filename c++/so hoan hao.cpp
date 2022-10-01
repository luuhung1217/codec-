#include<bits/stdc++.h>
using namespace std;
int nt(long long a){
	if(a<2){
		return 0;
	}
	for(long long i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
    	}
	}
    return 1;
}
long long tinh(long long a){
	long long tan=1;
	for(long long i=1;i<=a;i++){
		tan*=2;
	}
	return tan;
}
int sohh(long long a){
	for(long long i=2;i<20;i++){
		if(nt(i) && nt(tinh(i)-1) && a==tinh(i-1)*(tinh(i)-1)){
			return 1;
		}
	}
	return 0;
}
int main (){
	int a;
	cin>>a;
	
	for(int i=1;i<=a;i++){
	   long long b;
		cin>>b;
		cout<<sohh(b)<<endl;
		
	}
}

