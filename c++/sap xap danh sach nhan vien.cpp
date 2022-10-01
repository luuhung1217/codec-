#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten;
	string gt;
	string date;
	string diachi;
	string thue;
	string ky;
	int stt;
};
void nhap(NhanVien &d){
		scanf("\n");
		getline(cin,d.ten);
		getline(cin,d.gt);
		getline(cin,d.date);
		getline(cin,d.diachi);
		getline(cin,d.thue);
		getline(cin,d.ky);
}
int thang(string s){
	int sum=(s[0]-48)*10+s[1]-48;
	return sum;
}
int ngay(string s){
	int sum=(s[3]-48)*10+s[4]-48;
	return sum;
}
int nam(string s){
	int sum=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
	return sum;
}
void sapxep(NhanVien ds[],int &N){
	for(int i=0;i<N;i++){
		ds[i].stt=i+1;
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(nam(ds[i].date)>nam(ds[j].date)){
				swap(ds[i],ds[j]);
			}
			else if(nam(ds[i].date)==nam(ds[j].date)){
				if(thang(ds[i].date)>thang(ds[j].date)){
					swap(ds[i],ds[j]);
				}
				else if(thang(ds[i].date)==thang(ds[j].date)){
					if(ngay(ds[i].date)>ngay(ds[j].date)){
						swap(ds[i],ds[j]);
					}
				}
			}
		}
	}
}
void inds(NhanVien ds[],int &N){
	for(int i=0;i<N;i++){
		if(ds[i].stt<10){
			cout<<"0000"<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].date<<" "<<ds[i].diachi<<" "<<ds[i].thue<<" "<<ds[i].ky;
		}
		if(ds[i].stt>=10){
			cout<<"000"<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].date<<" "<<ds[i].diachi<<" "<<ds[i].thue<<" "<<ds[i].ky;
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
	sapxep(ds,N);
	inds(ds,N);
	return 0;
}

