#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		long long uscln(long long a,long long b){
			if(b==0) return a;
			else return uscln(b,a%b);
		}
		PhanSo(long long tu,long long mau){
			this->tu=tu;
			this->mau=mau;
		} 
		friend istream& operator>> (istream &is,PhanSo &p){
			is>>p.tu>>p.mau;
			return is;
		}
		void rutgon(){
			long long us=uscln(tu,mau);
			tu/=us;
			mau/=us;
		}
		
		friend PhanSo& operator+(PhanSo &ps1,PhanSo &ps2){
			ps1.tu=ps1.tu*ps2.mau+ps1.mau*ps2.tu;
			ps1.mau=ps1.mau*ps2.mau;
			ps1.rutgon();
			return ps1;
		}
		
		friend ostream& operator<<(ostream &os,PhanSo &p){
			os<<p.tu<<"/"<<p.mau;
			return os;
		}
};
int main(){
	PhanSo p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
	return 0;
}
