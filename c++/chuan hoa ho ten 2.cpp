#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
	}
	for(int i=1;i<s.size();i++){
		if(s[i-1]!=' '&&s[i]!=' '){
			s[i]+=32;
		}
	}
}
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		int a;
		cin>>a;
		scanf("\n");
		string s;
		getline(cin,s);
		int x=s.size();
		while(s[0]==' '){
			s.erase(s.begin()+0);
		}
		while(s[s.size()-1]==' '){
			s.erase(s.begin()+s.size()-1);
		}
		for(int i=0;i<x-1;i++){
			if(s[i]==' '&&s[i+1]==' '){
				s.erase(s.begin()+i);
				i--;
			}
		}
		chuanhoa(s);
		string h;
		if(a==1){
			int tmp=0;
			for(int i=s.size()-1;i>=0;i--){
				if(s[i]!=' '&&s[i-1]==' '){
					tmp=i;
					break;
				}
			}
			for(int i=tmp;i<s.size();i++){
				h+=s[i];
			}
				cout<<h<<" ";
			for(int i=0;i<tmp-1;i++){
				cout<<s[i];
			}
		}
		if(a==2){
			int tmp=0;
			for(int i=0;i<s.size();i++){
				if(s[i]!=' '&&s[i+1]==' '){
					tmp=i;
					break;
				}
			}
			for(int i=tmp+2;i<s.size();i++){
				cout<<s[i];
			}
			cout<<" ";
			for(int i=0;i<=tmp;i++)
				h+=s[i];
				cout<<h;
		}
		cout<<endl;
	}
}

