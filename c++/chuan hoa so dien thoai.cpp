#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		if(s[0]=='+'&&s[1]=='8'&&s[2]=='4'){
			s[0]=' ';
			s[1]=' ';
			s[2]='0';
		}
		if(s[0]=='8'&&s[1]=='4'){
			s[0]=' ';
			s[1]='0';
		}
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'&&(s[i+1]<'0'||s[i+1]>'9')){
				s[i+1]=' ';
			}
		}
		while(s[0]==' '){
			s.erase(s.begin()+0);
		}
		while(s[s.size()-1]==' '){
			s.erase(s.begin()+s.size()-1);
		}
		for(int i=0;i<s.size()-1;i++){
			if(s[i]==' '&&s[i+1]!=' '){
				s.erase(s.begin()+i);
				i--;
			}
		}
		if(s[0]!='0'){
			s="0"+s;
		}
		cout<<s<<endl;
	}
	return 0;
}

