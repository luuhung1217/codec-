#include<bits/stdc++.h>
using namespace std;
long long nt(long long a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%2==0){
			return 0;
		}
	}
	return 1;
}
int main (){
     long long a;
     cin>>a;
     if(nt(a)){
     	cout<<"YES";
	 }
	 else{
	 	cout<<"NO";
	 }
     
}

