#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv,name,lop,email;
	public:
		friend istream& operator>>(istream &is,SinhVien &a){
			scanf("\n");
			getline(is,a.msv);
			getline(is,a.name);
			getline(is,a.lop);
			getline(is,a.email);
			return is;
		} 
		friend ostream& operator<<(ostream &os,SinhVien &a){
			os<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
			return os;
		}
};
int khoa(string s){
	int k=0;
	k=(s[1]-48)*10+s[2]-48;
	return k+2000;
}
int main(){
	SinhVien ds[1000];
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ds[i];
	}
	int k;
	cin>>k;
	scanf("\n");
	while(k--){
		int s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN KHOA"<<" "<<s<<":"<<endl;
		for(int i=0;i<N;i++){
			if(khoa(ds[i].lop)==s){
				cout<<ds[i];
			}
		}
	}
	return 0;
}
