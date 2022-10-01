#include<bits/stdc++.h>
using namespace std;
int dem=1; 
class SinhVien{
	private:
		string name,lop,date;
		float diem;
	public:
		friend istream& operator>> (istream &is,SinhVien &a){
			cin.ignore();
			getline(is,a.name);
			getline(is,a.lop);
			getline(is,a.date);
			cin>>a.diem;
			return is;
		}
		friend ostream& operator<< (ostream &os,SinhVien &a){
			string s=a.date;
			if(a.date[1]=='/') s="0"+s;
			for(int i=2;i<s.size();i++)
				if(s[i-1]=='/'&&s[i]!='/'&&s[i+1]=='/')
					s.insert(i,"0");
			
			if(dem<10){
				os<<"B20DCCN00"<<dem<<" "<<a.name<<" "<<a.lop<<" "<<s<<" ";
				os<<fixed<<setprecision(2)<<a.diem;
				
			}
			else{
				os<<"B20DCCN0"<<dem<<" "<<a.name<<" "<<a.lop<<" "<<s<<" ";
				os<<fixed<<setprecision(2)<<a.diem;

			}
			dem++;
			os<<endl;
			return os;
		}
};
int main(){
	SinhVien ds[50];
	int N,i;
	cin>>N;	
	
	for(i=0;i<N;i++){
		cin>>ds[i];
	}
	for(i=0;i<N;i++){
		cout<<ds[i];
	}
	return 0;
}

