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
int tong(int a){
   	 	int sum=0;
		while(a>0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int tonguoc(int a){
	int sum=0;
	while(a%2==0){
		sum +=2;
		a/=2;
	}
	for(int i=3;i<=sqrt(a);i+=2){
		while(a%i==0){
			sum +=tong(i);
			a/=i;
		}
	}
	if(a>1){
		sum +=tong(a);
	}
	return sum ;
}
int main (){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
   	    int b;
   	 	cin>>b;
		if(nt(b)==0&&tonguoc(b)==tong(b)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
   }
}

