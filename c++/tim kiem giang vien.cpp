#include<bits/stdc++.h>
using namespace std;
int dem=1;
class GiangVien{
	public:
		string name,khoa;
		int code;
	public:
		friend istream& operator>>(istream &is,GiangVien &a){
			scanf("\n");
			getline(is,a.name);
			getline(is,a.khoa);
			a.code=dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,GiangVien &a){
			string s=a.khoa;
			for(int i=0;i<s.size();i++){
				s[i]=toupper(s[i]);
			}
			stringstream ss(s);
			string tmp;
			string kq[100];
			int t=0;
			while(ss>>tmp){
				kq[t++]=tmp;
			} 
			string h;
			for(int i=0;i<t;i++){
				h+=kq[i][0];
			}
			os<<"GV";
			if(a.code<10){
				os<<"0"<<a.code<<" ";
			}
			else{
				os<<a.code<<" ";
			}
			os<<a.name<<" "<<h<<endl;
			return os;
		}
}; 
string vietthuong(string h){
	for(int i=0;i<h.size();i++){
		h[i]=tolower(h[i]);
	}
	return h;
}
int kt(string h,string s){
	string k1=vietthuong(h);
	string k2=vietthuong(s);
		int dem=0,j=0,i=0;
		while(k1[i]!=0){
			if(k1[i]==k2[j]){
				j++;
				if(k2[j]==0){
					dem=1;
					break;
				}
			}
			else 
			j=0;
			i++;
		}
		if(dem) return 1;
		return 0;
} 
int main(){
	GiangVien ds[100];
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ds[i];
	}
	int k;
	cin>>k;
	scanf("\n");
	while(k--){
		string s;
		getline(cin,s);
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		for(int i=0;i<N;i++){
			if(kt(ds[i].name,s)){
				cout<<ds[i];
			}
		}
	}
	return 0;
}

