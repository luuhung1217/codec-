#include<bits/stdc++.h>
using namespace std;
int dem=1;
string name3(string h){
    string s2[100];
    int t=0;
    for(int i=0;i<h.size();i++){
    	h[i]=toupper(h[i]);
	}
    stringstream ss(h);
    string tmp;
    while(ss>>tmp){
    	s2[t++]=tmp;
	}
	string k;
	for(int i=0;i<t;i++){
		k+=s2[i][0];
	}
	return k;
}
class GiangVien{
	public: 
		string name,bomon;
		int code;
	public:
		friend istream& operator>>(istream &is,GiangVien &a){
			scanf("\n");
			getline(is,a.name);
			getline(is,a.bomon);
			a.code=dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,GiangVien &a){
			os<<"GV";
			if(a.code<10){
				os<<"0"<<a.code<<" ";
			}
			else{
				os<<a.code<<" ";
			}
			os<<a.name<<" "<<name3(a.bomon)<<endl;
			return os;
		} 
};

int main(){
	GiangVien ds[100];
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ds[i];
	}
	int a;
	cin>>a;
	scanf("\n");
	while(a--){
	string b;
		getline(cin,b);
		cout<<"DANH SACH GIANG VIEN BO MON"<<" "<<name3(b)<<":"<<endl;
		for(int i=0;i<N;i++){
			if(ds[i].bomon==b){
				cout<<ds[i];
			}	
		}
	}
	return 0;
}

