#include<bits/stdc++.h>
using namespace std;
string diachi(string s){
	string username;
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	string h[100];
	stringstream ss(s);
	string tmp;
	int t=0;
	while(ss>>tmp){
		h[t++]=tmp;
	}
	username+=h[t-1];
	for(int i=0;i<t-1;i++){
		username+=h[i][0];
	}
	return username;
}
int dem(string list[],int t,string username){
	int count=0;
	for(int i=0;i<t;i++){
		if(list[i]==username){
			count++;
		}
	}
	return count;
}
int main(){
	int test;
	cin>>test;
	cin.ignore();
	string list[100];
	int t=0;
	while(test--){
		string s;
		getline(cin,s);
		string username=diachi(s);
		int count=dem(list,t,username);
		if(count==0){
			cout<<username<<"@ptit.edu.vn"<<endl;
		}
		else{
			cout<<username<<count+1<<"@ptit.edu.vn"<<endl;
		}
		list[t++]=username;
	}
}

