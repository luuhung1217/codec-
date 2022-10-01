#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;
	string date;
	double diem;
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
void in(SinhVien ds[],int &N){
	for(int i=0;i<N;i++){
			cout<<"B20DCCN";
		if(i+1<10){
			cout<<"00"<<i+1<<" ";
		} 
		else{
			cout<<"0"<<i+1<<" ";
		}
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
		cout<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
		cout << fixed << setprecision(2) << ds[i].diem;
		cout<<endl;
	}
}
int main(){
	struct SinhVien ds[50];
	int N;
	cin>>N;
	nhap(ds,N);
	in(ds,N);
	return 0;
}

