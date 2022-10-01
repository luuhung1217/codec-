#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238 
struct dientich{
	double x,y;
};
void nhap(dientich &a,dientich &b,dientich &c){
	cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
}
void in(dientich &a,dientich &b,dientich &c){
	double ac=0,bc=0,ab=0;
	ac=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
	bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
	ab=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	
	if(ac<=0||bc<=0||ab<=0||(ab+ac)<=bc||(ab+bc)<=ab||(bc+ab)<=ac){
		cout<<"INVALID"<<endl;
	}
	else{
		double r=(ac*ac*bc*bc*ab*ab)/((ab+ac+bc)*(ab+ac-bc)*(ac+bc-ab)*(bc+ab-ac));
		double s=r*PI;
		cout<<fixed<<setprecision(3)<<s<<endl;
	}
	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		dientich a,b,c;
		nhap(a,b,c);
		in(a,b,c);
	}
	return 0;
}

