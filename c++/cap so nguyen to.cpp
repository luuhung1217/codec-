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
 int b;
 for(int i=1;i<=a;i++){
 	cin>>b;
 	for(int j=2;j<=b;j++){
 		int dem=0;
 		if(nt(j)&&nt(b-j)){
 			dem++;
 			cout<<j<<" "<<b-j<<" ";
 			if(dem==1){
 				break;
 				dem=0;
			 }
		 }
	}
	cout<<endl;
  }
}

