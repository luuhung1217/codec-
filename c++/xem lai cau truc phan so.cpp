#include<bits/stdc++.h>
using namespace std;
long long uscln(long long a,long long b){
	if(b==0) return a;
	else return uscln(b,a%b);
}
typedef struct Phanso{
	long long tuso,mauso;
} PS;
 PS rutgon(PS p){
 	PS c;
 	c.tuso=p.tuso/uscln(p.tuso,p.mauso);
 	c.mauso=p.mauso/uscln(p.tuso,p.mauso);
 	return c;
 }
 void nhap(PS &p){
 	scanf("%d",p.tuso);
   scanf("%d",p.mauso);
 }
 void in(PS p){
 	cout<<p.tuso<<"/"<<p.mauso;
 }
int main (){
    PS p;
    nhap(p);
    rutgon(p);
    in(p);
}

