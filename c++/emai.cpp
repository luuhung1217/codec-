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
		int k=0,c=0,n=0;
		int p=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'||s[i]=='.'||s[i]=='_'||s[i]=='@'){
				
			}
			else{
				p=1;
				break;
			}
			if(s[i]==' '){
				p=1;
				break;
			}
			if(k==0){
				if(s[i]=='@'){
					k++;
				}
				else{
					m++;
					if(m>64){
						p=1;
						break;
					}
				}
			}
			else if(k>0){
				if(s[i]=='@'){
					p=1;
					break;
				}
				if(n==0&&s[i]=='.'){
					p=1;
					break;
				}
				n++;
				if(s[i]=='.'){
					c++;
				}
				if(n>254){
					p=1;
					break;
				}
				if(s[i]=='.'&&s[i-1]=='.'||s[i]=='.'&&s[i+1]=='.'){
					p=1;
					break;
				}
			}
			
		}
		if(s[s.size()-1]=='.'){
				p=1;
		}
			if(p==1||c==0||m==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
	}
}

