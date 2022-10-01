#include<bits/stdc++.h>
using namespace std; 
struct SinhVien{
	string ten;
	char lop[20],ngaysinh[20];
	float diem;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
	cin >> a.lop >> a.ngaysinh >> a.diem ;
}
void chinhngay(char a[]){
	if(strlen(a)==10){
		cout << a;
		
	}
	else{
		if(strlen(a)==8){
			cout << "0" << a[0] << a[1] << "0" << a[2] << a[3] << a[4] << a[5] << a[6] << a[7];
		}
		else if(strlen(a)==9){
			if(a[0]!='/' && a[1]=='/'){
				cout << "0" << a;
			}
			else if(a[3]!='/' && a[4]=='/'){
				cout << a[0] << a[1] << a[2] << "0" << a[3] << a[4] << a[5] << a[6] << a[7];
			}
		}
	}
}
void inThongTinSV(SinhVien &a){
	cout << "N20DCCN001 " << a.ten << " " << a.lop << " ";
	chinhngay(a.ngaysinh);
	cout<<" ";
		cout<<fixed<<setprecision(2)<<a.diem;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
