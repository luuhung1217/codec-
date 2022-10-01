#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv;
	string ten;
	string lop;
	string email;
	string dn;
	int stt;
};
void nhap(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].msv);
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].email);
		cin>>ds[i].dn;
	}
}
void chuanhoa(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		ds[i].stt=i+1;
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].ten>ds[j].ten){
				swap(ds[i],ds[j]);
			}
		}	
	}
}
void in(SinhVien ds[],int N,string s){	
	for(int i=0;i<N;i++){
		if(ds[i].dn==s){
			cout<<ds[i].stt<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].email<<" "<<s;
			cout<<endl;
		}
	}
}
int main(){
	struct SinhVien ds[100],d[6];
	int N;
	cin>>N;
	nhap(ds,N);
	chuanhoa(ds,N);
	int A;
	cin>>A;
	int i;
	string s;
	for(i=0;i<A;i++){
		cin>>s;
		in(ds,N,s);
	}
	return 0;
}

