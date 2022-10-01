#include<bits/stdc++.h>
using namespace std;
class People{
	protected:
		string name,tuoi;
};
class SinhVien:private People{
	private:
		string masv,lop;
		float diemtb;
	public:
		float getdiemtb(){
			return diemtb;
		}
		friend istream& operator>>(istream &is,SinhVien &a){
			getline(is,a.masv);
			getline(is,a.name);
			getline(is,a.tuoi);
			getline(is,a.lop);
			is>>a.diemtb;
			return is;
		}
		friend ostream& operator<<(ostream &os,SinhVien &a){
			os<<a.masv<<" "<<a.name<<" "<<a.tuoi<<" "<<a.lop<<" "<<a.diemtb<<endl;
			return os;
		}
};
class GiangVien:private People{
	private:
		string mgv,khoa;
	public:
		string getkhoa(){
			return khoa;
		}
		friend istream &operator>>(istream &is,GiangVien &b){
			getline(is,b.mgv);
			getline(is,b.name);
			getline(is,b.tuoi);
			getline(is,b.khoa);
			return is;
		}
		friend ostream &operator<<(ostream &os,GiangVien &b){
			os<<b.mgv<<" "<<b.name<<" "<<b.tuoi<<" "<<b.khoa<<endl;
			return os;
		}		
};
int main(){
	SinhVien ds[100];
	for(int i=0;i<2;i++){
		cin>>ds[i];
	}
	for(int i=0;i<2;i++){
		if(ds[i].getdiemtb()>=8.0){
			cout<<ds[i];
		}
	}
	GiangVien ds1[100];
	for(int i=0;i<3;i++){
		cin>>ds1[i];
	}
	for(int i=0;i<3;i++){
		if(ds1[i].getkhoa()=="CNTT"){
			cout<<ds[i];
		}
	}
}

