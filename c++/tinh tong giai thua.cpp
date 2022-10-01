#include<bits/stdc++.h>
using namespace std;
long long gt(int a){
	long long tan=1;
	for(int i=1;i<=a;i++){
		tan*=i;
	}
	return tan;
}
int main (){
   int a;
   cin>>a;
   long long sum=0;
   for(int i=1;i<=a;i++){
   	sum+=gt(i);
   }
   cout<<sum;
}

