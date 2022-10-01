#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
	int thuc,ao;
};
   
SoPhuc binh_phuong_tong(SoPhuc &A,SoPhuc &B){
	SoPhuc C;
	int k=A.thuc+B.thuc;
	int h=A.ao+B.ao;
	C.thuc=k*k-h*h;
	C.ao=2*k*h;
	return C;
}
void hien_thi(SoPhuc C){
	if(C.ao>0){
		cout<<C.thuc<<"+"<<C.ao<<"i";
	}
	else{
		cout<<C.thuc<<"-"<<abs(C.ao)<<"i";
	}
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}

