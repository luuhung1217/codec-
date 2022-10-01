#include<bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien{
	public:
		string name,gt,date1,noi,thue,date2;
		int msv;
	public:
		friend istream& operator>>(istream &is,NhanVien &a){
			scanf("\n");
			getline(is,a.name);
			getline(is,a.gt);
			getline(is,a.date1);
			getline(is,a.noi);
			getline(is,a.thue);
			getline(is,a.date2);
			a.msv=k;
			k++;
			return is;
		}
		friend ostream& operator<<(ostream &os,NhanVien &a){
			if(a.msv<10){
				os<<"0000"<<a.msv<<" ";
			}
			else{
				os<<"000"<<a.msv<<" ";
			}
			os<<a.name<<" "<<a.gt<<" "<<a.date1<<" "<<a.noi<<" "<<a.thue<<" "<<a.date2<<endl;
				return os;
		}
};
int main(){
	NhanVien ds[50];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++) cin>>ds[i];
	for(i=0;i<N;i++) cout<<ds[i];
	return 0;
}

