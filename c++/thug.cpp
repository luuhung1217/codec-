#include<bits/stdc++.h>
using namespace std;
int nt(int a){
	if(a==1){
		return 1;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return i;
		}
	}
}
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int b;
    	cin>>b;
    	for(int j=1;j<=b;j++){
    		cout<<nt(j)<<" ";
		}
		cout<<endl;
	}
}

