#include<bits/stdc++.h>
using namespace std;
string ngay(string s){
	s.erase(0,4);
	return s;
}
class SinhVien{
	public:
		string date,name,sdt;
	public:
		friend istream& operator>>(istream &is,SinhVien &a){
			getline(is,a.date);
			getline(is,a.name);
			getline(is,a.sdt);
			return is;
		}
		friend ostream& operator<<(ostream &os,SinhVien &a){
			return os<<a.name<<": "<<a.sdt<<" "<<ngay(a.date)<<endl;
		}
};
string name3(string s){
	stringstream ss(s);
	string a,b;
	while(ss>>a){
		b=a;
	}
	return b;
}
string name2(string s){
	stringstream ss(s);
	string a,b[20];
	int t=0;
	while(ss>>a){
		b[t++]=a;
	}
	return b[1];
}
void sapxep(SinhVien ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(name3(ds[i].name)>name3(ds[j].name)){
				swap(ds[i],ds[j]);
			}
			else if(name3(ds[i].name)==name3(ds[j].name)){
				if(name2(ds[i].name)>name2(ds[j].name)){
					swap(ds[i],ds[j]);
				}
			}
		}
	}
}
int main(){
	SinhVien a;
	SinhVien ds[100];
	int t=0;
	ifstream fp;
	fp.open("SOTAY.txt",ios::in);
	while(fp>>a){
		ds[t++]=a;
	}
	fp.close();
	sapxep(ds,t);
	ofstream fp1;
	fp1.open("DIENTHOAI.txt",ios::out);
	for(int i=0;i<t;i++){
		fp1<<ds[i];
	}
	fp1.close();
}

