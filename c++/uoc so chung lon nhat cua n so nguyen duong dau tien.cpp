#include<iostream>
using namespace std;
long long  uscln(long long a,long long b ){
	if(b==0) return a;
	else return uscln(b,a%b);
}
int main (){
	int a;
	cin>>a;
	int b;
	
	for(int i=1;i<=a;i++){
		cin>>b;
		long long sum=1;
		for(int j=1;j<=b;j++){
			
		sum=sum*j/uscln(sum,j);
		}
		cout<<sum<<endl;
	}
}
