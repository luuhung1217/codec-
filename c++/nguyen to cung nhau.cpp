#include<bits/stdc++.h>
using namespace std;
int nt(int a){
	if(a<2){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main (){
    int n;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
    	cin>>a;
    	int dem=0;
    	for(int j=2;j<=a;j++){
    		if(nt(j)){
    			dem++;
			}
		}
		if(nt(dem)){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}

