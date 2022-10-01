#include<bits/stdc++.h>
using namespace std;
long long lk(long long c){
	if(c<2){
		return 0;
	}
	for(int i=2;i<=sqrt(c);i++){
		if(c%i==0){
			return 0;
		}
	}
	return 1;
}
void dem(long long b,long long a){
	int y=sqrt(b);
	int x=sqrt(a);
	int dem=0;
	for(long long i=y;i<=x;i++){
		if(i*i>=b&&lk(i)){
			dem++;
		}
	}
	cout<<dem<<endl;
}
int main (){
   int a;
   cin>>a;
   long long b,c;
   for(int i=1;i<=a;i++){
   	  cin>>b>>c;
   	  dem(b,c);
   }
}

