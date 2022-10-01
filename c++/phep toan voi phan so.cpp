#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	return __gcd(a,b);
}
struct PhanSo{
	long long tu,mau;
};
	PhanSo C;
	PhanSo D;
void process(PhanSo &A,PhanSo &B){
	
	C.tu=A.tu*B.mau+B.tu*A.mau;
	C.mau=A.mau*B.mau;
	C.tu=C.tu*C.tu;
	C.mau=C.mau*C.mau;
	long long uoc=uscln(C.tu,C.mau);
	C.tu=C.tu/uoc;
	C.mau=C.mau/uoc;
	cout<<C.tu<<"/"<<C.mau<<" ";
	D.tu=A.tu*B.tu*C.tu;
	D.mau=A.mau*B.mau*C.mau;
	long long uoc1=uscln(D.tu,D.mau);
	D.tu=D.tu/uoc1;
	D.mau=D.mau/uoc1;
	cout<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
