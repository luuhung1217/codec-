#include<bits/stdc++.h>
using namespace std;
struct MatHang{
	int stt;
	string ten;
	string nhom;
	float giamua;
	float giaban;
};
void nhap(MatHang &d){
	scanf("\n");
	getline(cin,d.ten);
	getline(cin,d.nhom);
	cin>>d.giamua>>d.giaban;
}
long long loinhuan(long long a,long long b){
	return (b-a);
}
void sapxep(MatHang ds[],int &N){
	for(int i=0;i<N;i++){
		ds[i].stt=i+1;
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(loinhuan(ds[i].giamua,ds[i].giaban)<loinhuan(ds[j].giamua,ds[j].giaban)){
				swap(ds[i],ds[j]);
			}
		}
	}
}
void in(MatHang ds[],int N){
	for(int i=0;i<N;i++){
		cout<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].nhom<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].giaban-ds[i].giamua;
		cout<<endl;
	}
}
int main(){
	struct MatHang ds[100];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++) nhap(ds[i]);
	sapxep(ds,N);
	in(ds,N);
	return 0;
}

