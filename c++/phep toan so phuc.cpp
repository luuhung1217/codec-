#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
	int thuc,ao;
};
   
SoPhuc binh_phuong_tong(SoPhuc &A,SoPhuc &B){
	SoPhuc C;
	C.thuc=A.thuc+B.thuc;
	C.ao=A.ao+B.ao;
	C.thuc=C.thuc*C.thuc-C.ao*C.ao;
	C.ao=2*C.ao*C.thuc;
	return C;
}
void hien_thi(SoPhuc C){
	if(C.ao>0){
		cout<<C.thuc<<"+"<<C.ao<<"i";
	}
	else{
		cout<<C.thuc<<"-"<<abs(C.ao)<<"i\n";
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

