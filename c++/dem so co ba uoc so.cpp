#include<bits/stdc++.h>
using namespace std;
long long lk(long long c){
	for(int i=2;i<=sqrt(c);i++){
		if(c%i==0){
			return 0;
		}
	}
	return 1;
}
void dem(long long a){
	int x=sqrt(a);
	int dem=0;
	for(int i=2;i<=x;i++){
		if(i*i>2&&lk(i)){
			dem++;
		}
	}
	cout<<dem<<endl;
}
int main (){
   int a;
   cin>>a;
   long long b;
   for(int i=1;i<=a;i++){
   	  cin>>b;
   	  dem(b);
   }
}

