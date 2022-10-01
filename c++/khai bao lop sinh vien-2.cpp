#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name,lop,date;
		float diem;
	public:
		friend istream& operator>> (istream &is,SinhVien &a){
			getline(is,a.name);
			getline(is,a.lop);
			getline(is,a.date);
			is>>a.diem;
			return is;
		}
		friend ostream& operator<<(ostream &os,SinhVien const&a){
			string s=a.date;
			if(a.date[1]=='/') s="0"+s;
			for(int i=2;i<s.size();i++)
				if(s[i-1]=='/'&&s[i]!='/'&&s[i+1]=='/')
					s.insert(i,"0");
			os<<"B20DCCN001"<<" "<<a.name<<" "<<a.lop<<" "<<s<<" ";
			os<<fixed<<setprecision(2)<<a.diem;
			return os;
		}
};
int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}

