#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238 
struct dientich{
	float x,y;
};
void nhap(dientich &a,dientich &b,dientich &c){
	cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
}
void in(dientich &a,dientich &b,dientich &c){
	float ac=0,bc=0,ab=0;
	ac=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
	bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
	ab=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	float r=(ac*ac*bc*bc*ab*ab)/((ab+ac+bc)*(ab+ac-bc)*(ab+bc-ab)*(bc+ab-ac));
	if((ab+ac+bc)>0||(ab+ac-bc)>0||(ab+bc-ab)>0||(bc+ab-ac)>0||(ab*bc*ac)>0){
		cout<<fixed<<setprecision(3)<<r*PI<<endl;
	}
	else{
		cout<<"INVALID"<<endl;
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
	
}

