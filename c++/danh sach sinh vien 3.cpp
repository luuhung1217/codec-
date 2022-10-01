#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;
	string date;
	float diem;
	int stt;
};
void nhap(SinhVien ds[],int &N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].date);
		cin>>ds[i].diem;
	}
}
void chuanhoa(string &s){
	int x=s.size();
	while(s[0]==' '){
		s.erase(s.begin()+0);
	}
	while(s[x-1]==' '){
		s.erase(s.begin()+x-1);
	}
	for(int i=0;i<x-1;i++){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(s.begin()+i);
			i--;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
	}
	for(int i=1;i<s.size();i++){
		if(s[i-1]!=' '&&s[i]!=' '){
			s[i]+=32;
		}
	}
}
void sapxep(SinhVien ds[],int &N){
	for(int i=0;i<N;i++){
		ds[i].stt=i+1;
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].diem<ds[j].diem){
				swap(ds[i],ds[j]);
			}
		}
	}
}
void in(SinhVien ds[],int &N){
	for(int i=0;i<N;i++){
		chuanhoa(ds[i].ten);
	}
	for(int i=0;i<N;i++){
		int m=0;
		if(ds[i].date[1]=='/'){
			(ds[i].date).insert(0,"0");
			m++;
		}
		if(m==1){
			if(ds[i].date[4]=='/'){
				(ds[i].date).insert(3,"0");
			}
		}
		else{
			if(ds[i].date[4]=='/'){
				(ds[i].date).insert(3,"0");
			}
		}
	}
	for(int i=0;i<N;i++){
		if(ds[i].stt<10){
			cout<<"B20DCCN00"<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
			cout<<fixed<<setprecision(2)<<ds[i].diem;
		}
		if(ds[i].stt>=10){
			cout<<"B20DCCN0"<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
			cout<<fixed<<setprecision(2)<<ds[i].diem;
		}
		cout<<endl;
	}
}
int main(){
	struct SinhVien ds[50];
	int N;
	cin>>N;
	nhap(ds,N);
	sapxep(ds,N);
	in(ds,N);
	return 0;
}

