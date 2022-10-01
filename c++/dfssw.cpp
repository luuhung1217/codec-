#include<bits/stdc++.h>
using namespace std;
long long thuannghich(string s){
	int x=s.size();
	if(x<3){
		return 0;
	}
	for(int i=0;i<x/2;i++){
		if(s[i]!=s[x-i-1]){
			return 0;
		}
	}
	return 1;
}
bool cmp(string s1,string s2){
	if(s1.size()>s2.size()){
		return true;
	}
	if(s1.size()==s2.size()){
		if(s1>s2){
			return true;
		}
	}
	return false;
}
int main(){
	string s;
	string s2[10000];
	int t=0;
	while(cin>>s){
		if(thuannghich(s)){
			s2[t]=s;
			t++;
		}
 
	}
	sort(s2,s2+t,cmp);
	for(int i=0;i<t;i++){
		int dem1=0;
		for(int j=i;j<t;j++){
			if(s2[i]==s2[j]){
				dem1++;
			}
		}
		int dem2=0;
		for(int k=0;k<i;k++){
			if(s2[i]==s2[k]){
				dem2++;
				break;
			}
		}
		if(dem2==0){
			cout<<s2[i]<<" "<<dem1<<endl;
		}
 
	}
}
