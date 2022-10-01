#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv;
	string ten;
	string lop;
	float diem1,diem2,diem3;
};
void nhap(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].msv);
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		cin>>ds[i].diem1>>ds[i].diem2>>ds[i].diem3;
	}
}
void in(SinhVien ds[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].ten>ds[j].ten){
				swap(ds[i],ds[j]);
			}
		}	
	}
	for(int i=0;i<N;i++){
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].diem1<<" "<<ds[i].diem2<<" "<<ds[i].diem3<<endl;
	}
}
int main(){
	struct SinhVien ds[100];
	int N;
	cin>>N;
	nhap(ds,N);
	in(ds,N);
	return 0;
}

