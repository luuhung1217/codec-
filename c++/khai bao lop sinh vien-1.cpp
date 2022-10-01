#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string name,lop,date;
		float diem;
	public:
		void nhap(){
			getline(cin,name);
			getline(cin,lop);
			getline(cin,date);
			cin>>diem;
		}
		void xuat(){
			string s=date;
			if(s[1]=='/') s="0"+s;
			for(int i=2;i<s.size();i++)
				if(s[i]!='/'&&s[i-1]=='/'&&s[i+1]=='/')
					s.insert(i,"0");
			cout<<"B20DCCN001"<<" "<<lop<<" "<<name<<" "<<s<<" ";
			cout<<fixed<<setprecision(2)<<diem;
		}
};
int main(){
	SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

