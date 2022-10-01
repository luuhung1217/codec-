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
string nganh(string s){
	string k;
	if(s[3]=='D'&&s[4]=='C'&&s[5]=='K'&&s[6]=='T'){
		k="Ke toan";
	} 
	else if(s[3]=='D'&&s[4]=='C'&&s[5]=='C'&&s[6]=='N'){
		k="Cong nghe thong tin";
	}
	else if(s[3]=='D'&&s[4]=='C'&&s[5]=='A'&&s[6]=='T'){
		k="An toan thong tin";
	}
	else if(s[3]=='D'&&s[4]=='C'&&s[5]=='V'&&s[6]=='T'){
		k="Vien thong";
	}
	else if(s[3]=='D'&&s[4]=='C'&&s[5]=='D'&&s[6]=='T'){
		k="Dien tu";
	}
	return k;
}
string chuanhoa(string s){
	for(int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
	return s;
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
		string s;
		getline(cin,s);
		cout<<"DANH SACH SINH VIEN NGANH"<<" "<<chuanhoa(s)<<":"<<endl;
		string k="An toan thong tin";
		string h="Cong nghe thong tin";
		for(int i=0;i<N;i++){
			if(ds[i].lop[0]=='E'&&(nganh(ds[i].msv)==k||nganh(ds[i].msv)==h)){
				continue;
			}
			else {
				if(nganh(ds[i].msv)==s){
					cout<<ds[i];
				}
			}
		}
	}
	return 0;
}
