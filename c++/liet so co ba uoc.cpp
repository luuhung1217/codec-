#include<bits/stdc++.h>
using namespace std;
long long a;
int lk(int c){
	for(int i=2;i<=sqrt(c);i++){
		if(c%i==0){
			return 0;
		}
	}
	return 1;
}
void lk1(){
	int x=sqrt(a);
	for(int i=2;i<=x;i++){
		if(i*i>2&&lk(i)){
			cout<<i*i<<" ";
		}
	}
}

int main (){
   int b;
   cin>>b;
   for(int i=1;i<=b;i++){
   	  cin>>a;
   	  lk1();
   	  cout<<endl;
   }
}

