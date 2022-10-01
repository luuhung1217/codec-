#include<bits/stdc++.h>
using namespace std;
float diem(int a){
	if(a>=3&&a<=4) return 2.5;
	else if(a>=5&&a<=6) return 3.0;
	else if(a>=7&&a<=9) return 3.5;
	else if(a>=10&&a<=12) return 4.0;
	else if(a>=13&&a<=15) return 4.5;
	else if(a>=16&&a<=19) return 5.0;
	else if(a>=20&&a<=22) return 5.5;
	else if(a>=23&&a<=26) return 6.0;
	else if(a>=27&&a<=29) return 6.5;
	else if(a>=30&&a<=32) return 7.0;
	else if(a>=33&&a<=34) return 7.5;
	else if(a>=35&&a<=36) return 8.0;
	else if(a>=37&&a<=38) return 8.5;
	else if(a>=39&&a<=40) return 9.0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		float d1,d2,d3,d4;
		cin>>d3>>d4;
		d1=diem(a);
		d2=diem(b);
		float tb=(d1+d2+d3+d4)/4;
		b=(int)tb;
		float p=tb-b;
		float k=b ;
		
		if(p>=0.25&&p<0.75){
			cout<<fixed<<setprecision(1)<<k+0.25<<" ";
		}
		else if(p==0.75){
			cout<<fixed<<setprecision(1)<<k+1<<" ";
		}
		else{
			cout<<fixed<<setprecision(1)<<k<<" ";
		}
		cout<<endl;
	}
}

