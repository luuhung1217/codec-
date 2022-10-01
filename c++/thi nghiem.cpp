#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
string s;
	if(a<9){
		s+="0"+a;
	}
	if(a>10){
		s+="a";
	}
	cout<<s;
}

