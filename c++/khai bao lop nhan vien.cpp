#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string name,gt,date1,noi,thue,date2;
	public:
		void nhap(){
			getline(cin,name);
			getline(cin,gt);
			getline(cin,date1);
			getline(cin,noi);
			getline(cin,thue);
			getline(cin,date2);
		}
		void xuat(){
			cout<<"00001"<<" "<<name<<" "<<gt<<" "<<date1<<" "<<noi<<" "<<thue<<" "<<date2;
		}
};
int main(){
	NhanVien a;
	a.nhap();
	a.xuat();
	return 0;
}

