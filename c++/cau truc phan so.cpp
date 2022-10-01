#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
 struct PhanSo{
	long long tuso,mauso;
};
void nhap( PhanSo &p){
 	cin>>p.tuso>>p.mauso;
 }
   void rutgon(PhanSo &p){
       long long uoc=uscln(p.tuso,p.mauso);
 		p.tuso/=uoc;
 		p.mauso/=uoc;
 }
 
 void in(PhanSo &p){
 	cout<<p.tuso<<"/"<<p.mauso<<endl;
 }
int main (){
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}

