#include<iostream>
using namespace std;
int uscln(int a,int b ){
	if(b==0) return a;
	else return uscln(b,a%b);
}
int main (){
	int a;
	cin>>a;
	int b;
	long long sum;
	for(int i=1;i<=a;i++){
		cin>>b;
		sum=1;
		for(int j=1;j<=b;j++){
			
		sum*=sum*j/uscln(sum,j);
		}
		cout<<sum<<" "<<endl;
	}
}
