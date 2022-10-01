#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	cin.ignore();
	while(N--){
		string s;
		getline(cin,s);
		int m=0;
		int m1=0,c=0,n=0;
		int h=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='z'||s[i]=='@'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'||s[i]=='.'||s[i]=='_'){
				
		}
			else{
				h=1;
				break;
			}
			if(s[i]==' '){
				h=1;
				break;
			}
			if(m1==0){
				if(s[i]=='@'){
					m1++;
				}
				else{
					m++;
					if(m>64){
						h=1;
						break;
					}
				}
			}
			else if(m1>0){
				if(s[i]=='@'){
					h=1;
					break;
				}
				if(n==0&&s[i]=='.'){
					h=1;
					break;
				}
				n++;
				if(s[i]=='.'){
					c++;
				}
				if(n>254){
					h=1;
					break;
				}
				if(s[i]=='.'&&s[i-1]=='.'||s[i]=='.'&&s[i+1]=='.'){
					h=1;
					break;
				}
			}
			
		}
		if(s[s.size()-1]=='.'){
				h=1;
		}
			if(h==1||c==0||m==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
	}
}

