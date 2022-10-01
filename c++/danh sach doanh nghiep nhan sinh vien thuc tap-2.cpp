#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	public:
		string code,name;
		int sosv;
	public:
		friend istream& operator>>(istream &is,DoanhNghiep &a){
			scanf("\n");
			getline(is,a.code);
			getline(is,a.name);
			cin>>a.sosv;
			return is;
		}
		friend ostream& operator<<(ostream &os,DoanhNghiep &a){
			os<<a.code<<" "<<a.name<<" "<<a.sosv<<endl;
			return os;
		}
};
void sapxep(DoanhNghiep ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].sosv<ds[j].sosv){
				swap(ds[i],ds[j]);
			}
			else if(ds[i].sosv==ds[j].sosv){
				if(ds[i].code>ds[j].code){
					swap(ds[i],ds[j]);
				}
			}
		}
	}
}
int main(){
	DoanhNghiep ds[100];
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ds[i];
	}
	sapxep(ds,N);
	int b;
	cin>>b;
	while(b--){
		int a,b;
		cin>>a>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:"<<endl;
		for(int i=0;i<N;i++){
			if(ds[i].sosv>=a&&ds[i].sosv<=b){
				cout<<ds[i];
			}
		}
	}
	return 0;
}

