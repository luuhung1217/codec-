#include<bits/stdc++.h>
using namespace std;
struct HocSinh{
	string ma,name;
	float toan,ly,hoa;
};
void nhap(HocSinh &a){
	getline(cin,a.ma);
	getline(cin,a.name);
	cin>>a.toan>>a.ly>>a.hoa;
}
void in(HocSinh &a){
	cout<<a.ma<<" "<<a.name<<" ";
	float ut=0;
	if(a.ma[0]=='K'&&a.ma[1]=='V'&&a.ma[2]=='1'){
		ut=0.5;
	}
	if(a.ma[0]=='K'&&a.ma[1]=='V'&&a.ma[2]=='2'){
		ut=1.0;
	}
	if(a.ma[0]=='K'&&a.ma[1]=='V'&&a.ma[2]=='3'){
		ut=2.5;
	}
	float diemtb=a.toan*2+a.ly+a.hoa;
	cout<<ut<<" "<<diemtb<<" ";
	if(diemtb+ut>=24){
		cout<<"TRUNG TUYEN";
	}
	else{
		cout<<"TRUOT";
	}
	
}
int main(){
	HocSinh a;
	nhap(a);
	in(a);
	return 0;
}

