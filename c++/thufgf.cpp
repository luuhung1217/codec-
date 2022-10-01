#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		int tu,mau;
	public:
		long long uscln(long long a,long long b){
			if(b==0) return a;
			else return uscln(b,a%b);
		}
		PhanSo(long long tu,long long mau){
			this->tu=tu;
			this->mau=mau;
		} 
		void rutgon(){
			long long us=uscln(tu,mau);
			tu/=us;
			mau/=us;
		}
		Phanso(){
		}
		PhanSo operator+(PhanSo ps){
			PhanSo kq;
			kq.tu=this->tu*ps.mau+this->mau*ps.tu;
			kq.mau=this->mau*ps.mau;
			kq.rutgon();
			return kq;
		}
		friend istream& operator>> (istream &is,PhanSo &p){
			is>>p.tu>>p.mau;
			return is;
		}
		friend ostream& operator<<(ostream &os,PhanSo &p){
			os<<p.tu<<"/"<<p.mau;
		}
};
		
int main(){
	PhanSo p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
	return 0;
}

