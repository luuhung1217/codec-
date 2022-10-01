#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;
	string date;
	float diem;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.date);
	cin>>a.diem;
}
void inThongTinSV(SinhVien &a){
	int m=0;
	if(a.date[1]=='/'){
		(a.date).insert(0,"0");
		m++;
	}
	if(m==1){
		if(a.date[4]=='/'){
			(a.date).insert(3,"0");
		}
	}
	else{
		if(a.date[4]=='/'){
			(a.date).insert(3,"0");
		}
	}
	cout<<"N20DCCN001"<<"	"<<a.ten<<"	"<<a.lop<<"	"<<a.date<<"	";
	cout<<fixed<<setprecision(2)<<a.diem;
}
int main(){
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}

