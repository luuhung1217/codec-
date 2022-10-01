#include<iostream>
using namespace std;
struct Mon {
	string MaHP;
	string TenHP;
	int Tin ;
	double  DiemCC;
	double DiemKT;
	double DiemThi;
};
struct SinhVien {
	string MaSV;
	string Ten;
	string Lop;
	double TrungBinh;
};
void nhapMon (Mon &e) {
	cin.ignore();
	getline (cin , e.MaHP);
	getline (cin , e.TenHP);
	cin >> e.Tin ;
}
void nhap (SinhVien &e) {
	getline (cin , e.MaSV);
	getline (cin , e.Ten);
	getline (cin , e.Lop);
}
void xuat (SinhVien e) {
	cout << e.MaSV <<" " <<e.Ten << " " << e.Lop <<" " <<e.TrungBinh << endl;
}
int main () {
	int N ;
	int M ;
	cin >> N ;
		cin >> M;
	Mon mon[1000];
	SinhVien sinhvien[1000];
	for (int i = 0 ; i < N ; i ++) {
		nhapMon(mon[i]);
	}
	cin.ignore();
	for (int i = 0 ; i < M ; i ++) {
		nhap (sinhvien[i] );
		int K;
		cin >> K ;
		cin.ignore();
		double Tong_tin = 0 ;
		double m  = 0;
		for (int h = 0 ; h < K ; h ++) {
			string hp;
			getline (cin , hp);
			for (int j = 0 ; j < N ; j ++) {
				if (hp == mon[j].MaHP) {
					double Tong = 0 ;
					double DiemCC , DiemKT , DiemThi ;
					Tong_tin = Tong_tin + mon[j].Tin ;
					cin >> DiemCC;
					Tong = DiemCC * 0.1 ;
					cin >> DiemKT ;
					Tong = Tong + DiemKT * 0.2 ;
					cin >> DiemThi ;
					cin.ignore();
					Tong = Tong + DiemThi * 0.7 ;
					m = m + Tong * mon[j].Tin;
					break ;
				}
			}
		}
		sinhvien[i].TrungBinh = m / Tong_tin;
	}
	for (int i = 0 ; i < M ; i ++){
		if (sinhvien[i].TrungBinh >= 7.0){
			xuat (sinhvien[i]);
		}
	}
}

