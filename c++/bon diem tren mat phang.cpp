#include<bits/stdc++.h>
using namespace std;
struct Point{
	long long x,y,z;
};
void nhap(Point &A){
	cin>>A.x>>A.y>>A.z;
}
 
Point diem(Point &A,Point &B){
	Point ab;
	ab.x=B.x-A.x;
	ab.y=B.y-A.y;
	ab.z=B.z-A.z;
	return ab;
}Point AB,AC,AD,ABCD;
void in(Point &A,Point &B,Point &C,Point &D){
	AB=diem(A,B);
	AC=diem(A,C);
	AD=diem(A,D);
	ABCD.x=AB.y*AC.z-AB.z*AC.y;
	ABCD.y=AB.z*AC.x-AB.x*AC.z;
	ABCD.z=AB.x*AC.y-AB.y*AC.x;
	long long tong=ABCD.x*AD.x+ABCD.y*AD.y+ABCD.z*AD.z;
	if(tong==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
int main(){
    int N;
    cin>>N;
    while(N--){
    	Point A,B,C,D;
    	nhap(A);
		nhap(B);
		nhap(C);
		nhap(D);
		in(A,B,C,D);
	}
	return 0;
}

