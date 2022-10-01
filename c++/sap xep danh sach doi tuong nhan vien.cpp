#include<bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien{
	public:
		string name,gt,date,noi,thue,date2;
		int msv;
	public:
		friend istream& operator>>(istream &is,NhanVien &a){
			scanf("\n"); 
			getline(is,a.name);
			getline(is,a.gt);
			getline(is,a.date);
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
			os<<a.name<<" "<<a.gt<<" "<<a.date<<" "<<a.noi<<" "<<a.thue<<" "<<a.date2<<endl;
				return os;
		}
};
int ngay(string s){
	int k;
	k=(s[0]-48)*10+s[1]-48;
	return k;
}
int thang(string s){
	int k;
	k=(s[3]-48)*10+s[4]-48;
	return k;
}
int nam(string s){
	int k;
	k=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
	return k;
}
void sapxep(NhanVien ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(nam(ds[i].date)>nam(ds[j].date)){
				swap(ds[i],ds[j]);
			}
			else if(nam(ds[i].date)==nam(ds[j].date)){
				if(ngay(ds[i].date)>ngay(ds[j].date)){
					swap(ds[i],ds[j]);
				}
				else if(ngay(ds[i].date)==ngay(ds[j].date)){
					if(thang(ds[i].date)>thang(ds[j].date)){
						swap(ds[i],ds[j]);
					}
				}
			}
		}
	}
}
int main(){
	NhanVien ds[50];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++) cin>>ds[i];
	sapxep(ds,N);
	for(i=0;i<N;i++) cout<<ds[i];
	return 0;
}

