#include<bits/stdc++.h>
using namespace std;
string xuly(string s){
	int m=0;
	if(s[1]=='/'){
		(s).insert(0,"0");
		m++;
	}
	if(m==1){
		if(s[4]=='/'){
			(s).insert(3,"0");
		}
	}
	else{
		if(s[4]=='/'){
			(s).insert(3,"0");
		}
	}
	return s;
}
struct NhanVien{
	string ten;
	string gt;
	string date1;
	string diadiem;
	string thue;
	string date2;
}; 
void nhap(NhanVien &d){
	scanf("\n");
	getline(cin,d.ten);
	getline(cin,d.gt);
	getline(cin,d.date1);
	getline(cin,d.diadiem);
	getline(cin,d.thue);
	getline(cin,d.date2);
}
void inds(NhanVien ds[] , int N){
	for(int i=0;i<N;i++){
	
		if(i+1<=9){
			cout<<"0000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<xuly(ds[i].date1)<<" "<<ds[i].diadiem<<" "<<ds[i].thue<<" "<<xuly(ds[i].date2);
		}
		if(i+1>9){
			cout<<"000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<xuly(ds[i].date1)<<" "<<ds[i].diadiem<<" "<<ds[i].thue<<" "<<xuly(ds[i].date2);
		}
		cout<<endl;
		cin.ignore();
	}
}
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++) nhap(ds[i]);
	inds(ds,N);
	return 0;
}

