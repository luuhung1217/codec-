#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	scanf("%d\n",&a);
	for(int i=1;i<=a;i++){
		double b,c,d,e;
		cin>>b>>c>>d>>e;
		double k=sqrt((d-b)*(d-b)+(e-c)*(e-c));
		cout<<fixed<<setprecision(4)<<k<<endl;;
	}
	return 0 ;
}

