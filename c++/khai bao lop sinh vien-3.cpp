#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	for(int i=0;i<s.size();i++){
		s[0]=toupper(s[0]);
		if(s[i]==' '&&s[i+1]!=' '){
			s[i+1]=toupper(s[i+1]);
		}
	}
		return s;
}		
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
			os<<"B20DCCN001"<<" "<<chuanhoa(a.name)<<" "<<a.lop<<" "<<s<<" ";
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

