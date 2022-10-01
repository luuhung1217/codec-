#include<bits/stdc++.h>
using namespace std;
struct Luong{
	string ma,ten;
	long long luong;
};
void nhap(Luong &a){
	cin>>a.ma;
	getline(cin,a.ten);
	cin>>a.luong;
}
int ma(string s){
	int m=(s[2]-48)*10+s[3]-48;
	return m;
}
void in(Luong a){
	long long tien=0;
	if(a.ma[0]=='H'&&a.ma[1]=='P'){
		tien=ma(a.ma)*a.luong+900000;
		cout<<a.ma<<" "<<a.ten<<" "<<ma(a.ma)<<" "<<"900000"<<" "<<tien;
	}
	if(a.ma[0]=='H'&&a.ma[1]=='T'){
		tien=ma(a.ma)*a.luong+2000000;
		cout<<a.ma<<" "<<a.ten<<" "<<ma(a.ma)<<" "<<"2000000"<<" "<<tien;
	}
	if(a.ma[0]=='G'&&a.ma[1]=='V'){
		tien=ma(a.ma)*a.luong+500000;
		cout<<a.ma<<" "<<a.ten<<" "<<ma(a.ma)<<" "<<"500000"<<" "<<tien;
	}
}
int main(){
	Luong a;
	nhap(a);
	in(a);
}

