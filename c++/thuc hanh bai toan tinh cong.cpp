#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,cv;
	long long luong,cong;
};
void nhap(NhanVien &a){
	getline(cin,a.name);
	cin>>a.luong;
	cin>>a.cong;
	getline(cin,a.cv);
}
void in(NhanVien &a){
	cout<<"NV01"<<" "<<a.name<<" ";
	long long luongthang=a.luong*a.cong;
	long long thuong=0;
	if(a.cong>=25){
		thuong=luongthang*0.2;
	}
	else if(a.cong>=22&&a.cong<25){
		thuong=luongthang*0.1;
	}
	else if(a.cong<22){
		thuong=0;
	}
	long long phucap=0;
	if(a.cv=="GD"){
		phucap=250000;
	}
	else if(a.cv=="PGD"){
		phucap=200000;
	}
	else if(a.cv=="TP"){
		phucap==180000;
	}
	else if(a.cv=="NV"){
		phucap=150000;
	}
	cout<<luongthang<<" "<<thuong<<" "<<phucap<<" "<<luongthang+thuong+phucap;
}
int main(){
	NhanVien a;
	nhap(a);
	in(a);
}

