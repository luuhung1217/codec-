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
			this->tu = tu;
			this->mau = mau;
		}
		void rutgon(){
			long long uc=uscln(tu,mau);
			tu=tu/uc;
			mau=mau/uc;
		}
		friend istream& operator>> (istream &is, PhanSo &p){
			is>>p.tu>>p.mau;
			return is;
		}
		friend ostream &operator<< (ostream &os, PhanSo const&p){
			return os<<p.tu<<"/"<<p.mau;
		}	
};
int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout<<p;
	return 0;
}

