#include<bits/stdc++.h>
using namespace std;
int nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main (){
 int a;
 cin>>a;
 int b;
 for(int i=1;i<=a;i++){
 	cin>>b;
 	for(int j=2;j<=b;j++){
 		if(nt(j)){
 			cout<<j<<" ";
		 }
	}
	cout<<endl;
  }
}

