#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b){
	return __gcd(a,b);
}
struct PhanSo{
	long long tu, mau;
};
	PhanSo t;
void process(PhanSo A, PhanSo B){
	t.tu=A.tu*B.mau + B.tu*A.mau;
	t.mau=A.mau*B.mau;
	t.tu=t.tu*t.tu;
	t.mau=t.mau*t.mau;
	long long c=ucln(t.tu,t.mau);
	t.tu = t.tu/c;
	t.mau = t.mau/c;
	cout << t.tu << "/" << t.mau << " ";
	t.tu=A.tu*B.tu*t.tu;
	t.mau=A.mau*B.mau*t.mau;
	long long d=ucln(t.tu,t.mau);
	t.tu = t.tu/d;
	t.mau = t.mau/d;
	cout << t.tu << "/" << t.mau << endl;
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
