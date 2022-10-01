#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv,name,lop,email;
	public:
		friend istream& operator>>(istream &is,SinhVien &a){
			getline(cin,a.msv);
			getline(cin,a.name);
			getline(cin,a.lop);
			getline(cin,a.email);
			return is; 
		}
		friend ostream& operator<<(ostream &os,SinhVien &a){
			os<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
			return os;
		}
};
string ma(string s){
	s.erase(0,4);
	return s;
}
string ma1(string s){
	string k;
	 k+=s[0]+s[1]+s[2];
	return k;
}
void sapxep(SinhVien ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ma1(ds[i].msv)>ma1(ds[j].msv)){
				swap(ds[i],ds[j]);
			}
			else if(ma1(ds[i].msv)==ma1(ds[j].msv)){
				if(ma(ds[i].msv)>ma(ds[j].msv)){
					swap(ds[i],ds[j]);
				}
			}
		}
	}
}
int main(){
	SinhVien a;
	SinhVien ds[1000];
	int t=0;
	while(cin>>a){
		ds[t++]=a;
	}
	sapxep(ds,t);
	for(int i=0;i<t;i++){
		cout<<ds[i];
	}
	return 0;
}


