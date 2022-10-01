#include<bits/stdc++.h>
using namespace std;
string tru(string a,string b){
	string kq;
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	if(a<b){
		string tmp=a;
		        a=b;
		        b=tmp;
	}int c=0;
	for(int i=a.size()-1;i>=0;i--){
		int  kt=(a[i]-48)-(b[i]-48)-c;
		if(kt<0){
			kq=(char)(kt+10+48)+kq;
			c=1;
		}
		else{
			kq=(char)(kt+48)+kq;
			c=0;
		}
	}
	return kq;
}
int main (){
    int n;
    cin>>n;
    while(n--){
    	string a,b;
    	cin>>a>>b;
    	cout<<tru(a,b)<<endl;
	}
}

