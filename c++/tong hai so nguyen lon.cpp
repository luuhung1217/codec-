#include<bits/stdc++.h>
using namespace std;
string cong( string a,string b){
	string k;
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	int x=0;
	for(int i=a.size()-1;i>=0;i--){
		int kq=a[i]+b[i]-96+x;
		x=kq/10;
		kq%=10;
		k=(char)(kq+48)+k;
	}
	if(x>0) k="1"+k;
	return k;
}
int main (){
     int n;
     cin>>n;
     while(n--){
     	string a,b;
     	cin>>a>>b;
     	cout<<cong(a,b)<<endl;
	}
}

