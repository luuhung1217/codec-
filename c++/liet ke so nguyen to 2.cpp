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
int a;
 cin>>a;
 int b,c;
 for(int i=1;i<=a;i++){
 	cin>>b>>c;
 	for(int j=b;j<=c;j++){
 		if(nt(j)){
 			cout<<j<<" ";
		 }
	}
	cout<<endl;
  }
}

