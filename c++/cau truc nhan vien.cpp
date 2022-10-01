#include<bits/stdc++.h>
using namespace std;
string xuly(string s){
	int m=0;
	if(s[1]=='/'){
		(s).insert(0,"0");
		m++;
	}
	if(m==1){
		if(s[4]=='/'){
			(s).insert(3,"0");
		}
	}
	else{
		if(s[4]=='/'){
			(s).insert(3,"0");
		}
	}
	return s;
}
struct NhanVien{
	string ten;
	string gt;
	string date1;
	string diadiem;
	string thue;
	string date2;
}; 
void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.date1);
	getline(cin,a.diadiem);
	getline(cin,a.thue);
	getline(cin,a.date2);
}
void in(NhanVien &a){
	cout<<"00001"<<" "<<a.ten<<" "<<a.gt<<" "<<xuly(a.date1)<<" "<<a.diadiem<<" "<<a.thue<<" "<<xuly(a.date2);
}
int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}

