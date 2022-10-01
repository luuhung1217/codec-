#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop;
	float diem1,diem2;
	float tb;
}; 
void nhap(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].msv);
		getline(cin,ds[i].name);
		getline(cin,ds[i].lop);
		cin>>ds[i].diem1>>ds[i].diem2;
	}
}
void sapxepdiem(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		if(ds[i].diem2 >=7){
			cout<<ds[i].name;
		}
	}
}
void thututudien(SinhVien ds[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].name>ds[j].name){
				swap(ds[i],ds[j]);
			}
		}	
	}
	for(int i=0;i<N;i++){
		cout<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].diem1<<" "<<ds[i].diem2;
	}
}
void trungbinh(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		 ds[i].tb=(ds[i].diem1+ds[i].diem2)/2;
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].tb<ds)
		}
	}
}
int main(){
	struct SinhVien ds[100];
	int N;
	cin>>N;
	nhap(ds,N);
	sapxepdiem(ds,N);
	return 0;
}

