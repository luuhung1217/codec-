#include<bits/stdc++.h>
using namespace std;
string lonnhat(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]=='5'){
			s[i]='6';
		}
	}
	return s;
}
string nhonhat(string s){
	for(int i=0)
}
int main(){
	string s;
	cin>>s;
	cout<<lonnhat(s);
}

