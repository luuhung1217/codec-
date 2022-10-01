#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	public:
		string code,name;
		int sosv;
	public:
		friend istream& operator>>(istream &is ,DoanhNghiep &a){
			scanf("\n");
			getline(is,a.code);
			getline(is,a.name);
			is>>a.sosv;
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
	for(int i=0;i<N;i++){
		cout<<ds[i];
	}
}

