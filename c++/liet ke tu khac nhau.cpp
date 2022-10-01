#include<bits/stdc++.h>
using namespace std;
string vietthuong(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	fstream fp;
	fp.open("VANBAN.in");
	string s1[100000];
	int t=0;
	while(!fp.eof()){
		string s;
	    fp>>s;
		s1[t++]=vietthuong(s);
	}
	set<string>s2;
	for(int i=0;i<t;i++){
		s2.insert(s1[i]);
	}
	for(string j:s2){
		cout<<j<<endl;
	}
	fp.close();
}

