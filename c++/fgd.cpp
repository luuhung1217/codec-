#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name;
	long long luong,cong;
	string cv;
};
void nhap(NhanVien &a){
	getline(cin,a.name);
	cin>>a.luong>>a.cong;
	cin>>a.cv;
}
void in(NhanVien &a){
	cout<<"NV01"<<" "<<a.name<<" "<<a.luong*a.cong<<" ";
	 long long a1=a.luong*a.cong;
	 long long thuong=0;
	if(a.cong>=25){
		thuong=a1*0.2;
	}
	if(a.cong>=22&&a.cong< 25){
		thuong=a1*0.1;
	}
	else if(a.cong<=21){
		thuong=0;
	}
	long long tien=0;
	if(a.cv =="GD"){
		tien=250000;
	}
	else if(a.cv=="PGD"){
		tien=200000;
	}
	else if(a.cv=="TP"){
		tien=180000;
	}
	else if(a.cv=="NV"){
		tien=150000;
	}
	cout<<thuong<<" "<<tien<<" "<<tien+thuong+a1;
}
int main(){
	NhanVien a;
	nhap(a);
	in(a);
	return 0;
}

