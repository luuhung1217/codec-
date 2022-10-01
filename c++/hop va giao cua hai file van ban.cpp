#include<bits/stdc++.h>
using namespace std;
string vietthuong(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	fstream fp1;
	fp1.open("DATA1.in");
	string s1[10000],s2[10000];
	int dem1=0,dem2=0;
	while(!fp1.eof()){
		string s;
		fp1>>s;
		s1[dem1++]=vietthuong(s);
	}
	fstream fp2;
	fp2.open("DATA2.in");
	while(!fp2.eof()){
		string x;
		fp2>>x;
		s2[dem2++]=vietthuong(x);
	}
	set<string>so1;
	set<string>so2;
	for(int i=0;i<dem1;i++){
		so1.insert(s1[i]);
	}
	for(int i=0;i<dem2;i++){
		if(so1.find(s2[i])!=so1.end()){
			so2.insert(s2[i]);
		}
		
	}
	for(int i=0;i<dem2;i++){
		so1.insert(s2[i]);
	}
	for(string j:so1){
		cout<<j<<" ";
	}
	cout<<endl;
	for(string j:so2){
		cout<<j<<" ";
	}
	fp2.close();
	fp1.close();
}

