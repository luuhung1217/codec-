#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
	char s[20];
	float a,b,c;
};
void nhap(ThiSinh &A){
	getline(cin,A.ten);
	cin>>A.s;
	cin>>A.a>>A.b>>A.c;
}
void in(ThiSinh &A){
	float k=A.a+A.b+A.c;
	cout<<A.ten<<" "<<A.s<<" ";
	cout<<fixed<<setprecision(1)<<k;
	cout<<endl;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}

