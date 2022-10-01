#include<bits/stdc++.h>
using namespace std;
int dem=1;
class SinhVien{
	private:
		string name,lop,date;
		float diem;
	public:
		friend istream& operator>>(istream &is,SinhVien &a){
			cin.ignore();
			getline(is,a.name);
			getline(is,a.lop);
			getline(is,a.date);
			is>>a.diem;
			return is;		
		}
		friend ostream& operator<<(ostream &os,SinhVien &a){
			string s=a.date;
			if(s[1]=='/') s="0"+s;
			for(int i=2;i<s.size();i++)
				if(s[i-1]=='/'&&s[i]!='/'&&s[i+1]=='/')
					s.insert(i,"0");
			
			if(dem<10){
				os<<"B20DCCN00"<<dem<<" ";
				dem++;
			}
			else{
				os<<"B20DCCN0"<<dem<<" ";
				dem++;
			}
			string h=a.name;
			for(int i=0;i<h.size();i++){
				h[i]=tolower(h[i]);
			}
			string s2[50];
			stringstream ss(h);
			string tmp;
			int dem1=0;
			while(ss>>tmp){
				s2[dem1++]=tmp;
			}
			for(int i=0;i<dem1;i++){
				s2[i][0]=toupper(s2[i][0]);
			}
			for(int i=0;i<dem1;i++){
				os<<s2[i];
				if(i!=dem1-1) os<<" ";
			}
						
			os<<" "<<a.lop<<" "<<s<<" ";
			os<<fixed<<setprecision(2)<<a.diem;
			os<<endl;
			return os;
		}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
