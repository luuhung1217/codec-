#include<iostream>
 using namespace std;
int uscln(int a,int b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
long long bscnn(long long a,long long b){
	return (a*b)/uscln(a,b);
}
int main(){
	int a;
	cin>>a;
	long long b,c;
	for(int i=1;i<=a;i++){
		cin>>b>>c;
		cout<<bscnn(b,c)<<" "<<uscln(b,c)<<" "<<endl;
	}
} 


