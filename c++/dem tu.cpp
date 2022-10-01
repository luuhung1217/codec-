#include<bits/stdc++.h>
using namespace std;	
int main (){
  int a;
  cin>>a;
  cin.ignore();
  for(int i=1;i<=a;i++){
  	string s;
  	getline(cin,s);
  	int dem=0;
		for(int j=0;j<s.size();j++){
			if(s[j]==' '||s[j]=='\t'||s[j]=='\n'){
			dem++;
		}	
	}
	cout<<dem+1<<endl;	
  	}
}

