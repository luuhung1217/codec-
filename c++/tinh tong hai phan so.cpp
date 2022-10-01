#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
long long bscnn(long long a,long long b){
	return (a*b)/uscln(a,b);
}
struct PhanSo{
	long long tu,mau;
};
   void nhap(PhanSo &p1){
   	    cin>>p1.tu>>p1.mau;
   }
   PhanSo rutgon(PhanSo &ps){
   	    long long uoc=uscln(ps.tu,ps.mau);
   	    ps.tu/=uoc;
   	    ps.mau/=uoc;
   	    return ps;
   }
   PhanSo tong(PhanSo &p,PhanSo &q){
   	   PhanSo tong;
   	   tong.tu=p.tu*q.mau+p.mau*q.tu;
   	   tong.mau=q.mau*p.mau;
   	   tong=rutgon(tong);
   	   return tong;
   }
   void in(PhanSo &p1){
   	   cout<<p1.tu<<"/"<<p1.mau;
   }
int main (){
         struct PhanSo p,q;
         nhap(p);nhap(q);
         PhanSo t=tong(p,q);
         in(t);
         return 0;
}

