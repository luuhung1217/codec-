#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	} 
    string v[100];
    stringstream ss(s);
    string tmp;
    int t=0;
    while(ss>>tmp){
    	v[t++]=tmp;
	}
	for(int i=0;i<t;i++){
		v[i][0]=toupper(v[i][0]);
	}
	for(int i=0;i<t-1;i++){
		cout<<v[i];
		if(i!=t-2) cout<<" ";
	}
	cout<<","<<" "<<v[t-1];
}

