#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
double tamgiac(Point &A,Point &B,Point &C){
	return (0.5*abs((C.x-A.x)*(B.y-A.y)-(B.x-A.x)*(C.y-A.y)));
}
void nhap(Point &A){
		cin>>A.x>>A.y;
}
void in(Point s[],int N){
	double sum=0;
	for(int i=0;i<N-1;i++){
		sum+=tamgiac(s[0],s[i],s[i+1]);
	}
	cout<<fixed<<setprecision(3)<<sum<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){	
		int N;
		cin>>N;
		Point s[100];
		for(int i=0;i<N;i++){
		nhap(s[i]);
		}
		in(s,N);
	}
}

