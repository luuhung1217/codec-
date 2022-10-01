#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
	string msv,name,lop,email;
	public:
	friend istream& operator>>(istream &is,SinhVien &a){
		scanf("\n");
		getline(is,a.msv);
		getline(is,a.name);
		getline(is,a.lop);
		getline(is,a.email);
		return is;
	}	
	friend ostream& operator<<(ostream &os,SinhVien &a){
		os<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
		return os;
	}
};
string masv(string s){
	string b;
	b+=s[0]+s[1]+s[2];
	return b;
}
string cuoimsv(string s){
	s.erase(0,3);
	return s;
}
void sapxep(SinhVien ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(masv(ds[i].lop)>masv(ds[j].lop)){
				swap(ds[i],ds[j]);
			}
			else if(masv(ds[i].lop)==masv(ds[j].lop)){
				if(cuoimsv(ds[i].lop)>cuoimsv(ds[j].lop)){
					swap(ds[i],ds[j]);
				}
				else if(cuoimsv(ds[i].lop)==cuoimsv(ds[j].lop)){
					if(ds[i].msv>ds[j].msv){
						swap(ds[i],ds[j]);
					}
				}
			}
		}
	}
}
int main(){
	SinhVien ds[1000];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>ds[i];
	}
	sapxep(ds,N);
	for(i=0;i<N;i++){
		cout<<ds[i];
	}
	return 0;
}

