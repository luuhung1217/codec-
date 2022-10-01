#include<bits/stdc++.h>
using namespace std;
long  nt(long a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
long tg(long a){
	int so=a%10;
	a/=10;
	while(a>0){
		if(so<=a%10)
		 return 0;
		 so=a%10;
		a/=10;
	}
	return 1;
}
long giam(long a){
	int so=a%10;
	a/=10;
	while(a>0){
		if(so>=a%10)
		return 0;
		so=a%10;
		a/=10;
	}
	return 1;
}
int main (){
 int n;
 cin>>n;
  long a;
 for(int i=1;i<=n;i++){
 	cin>>a;
 	int x=pow(10,a-1);
 	int y=pow(10,a);
 	int dem=0;
 		for(int i=x;i<y;i++){
 			if(tg(i)&&nt(i)||giam(i)&&nt(i)){
 				dem++;
			 }
		}
		 cout<<dem<<endl;
	 
 	}
}

