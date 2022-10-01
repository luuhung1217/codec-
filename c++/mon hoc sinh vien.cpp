
#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop;
	float tb;
}; 
struct Mon{
	string ma,ten;
	int tin;
	float cc,kt,thi;
};
void nhapmon(Mon &a){
	cin.ignore();
	getline(cin,a.ma);
	getline(cin,a.ten);
	cin>>a.tin;
}
void nhap(SinhVien &a){
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.lop);
}
void xuat (SinhVien &e) {
	cout << e.msv <<" " <<e.name << " " << e.lop <<" " <<e.tb << endl;
}
int main(){
	struct SinhVien ds[100];
	struct Mon mon[100];
	int N,M;
	cin>>N>>M;

	for(int i=0;i<N;i++){
		nhapmon(mon[i]);
	}
	cin.ignore();
	for(int i=0;i<M;i++){
		nhap(ds[i]);
		int a;
		cin>>a;
		cin.ignore();
		
		float tb=0;
		float heso=0;
		for(int j=0;j<a;j++){
			string hp;
			getline(cin,hp);
			for(int t=0;t<N;t++){
				if(hp==mon[t].ma){
					float tong=0;
					float cc,kt,thi;
					tb+=mon[t].tin;
					cin>>cc;
					tong+=cc*0.1;
					cin>>kt;
					tong+=kt*0.2;
					cin>>thi;
					cin.ignore();
					tong+=kt*0.7;
					heso+=tong*mon[t].tin;
					break;
				}
			}	
		}
		 ds[i].tb=heso/tb;
	}
	for(int i=0;i<M;i++){
		if(ds[i].tb >=7.0){
			xuat(ds[i]);
		}
	}
}


