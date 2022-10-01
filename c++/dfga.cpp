#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    cin.ignore();
    while(a--){
    	string s,h;
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
		for(int i=0;i<x;i++){
    		if(s[i]>='A'&&s[i]<='Z'){
    			 s[i]+=32;
			}
		}
		int tmp=0;
		for(int i=x-1;i>=0;i--){
			if(s[i]!=' '&&s[i-1]==' '){
				tmp=i;
				break;
			}
		}
		for(int i=tmp;i<x;i++)
		    h+=s[i];
		    h+=s[0];
		for(int i=0;i<tmp-1;i++){
			if(s[i]==' '&&s[i+1]!=' '){
				h+=s[i+1];
			}
		}
		string k[100];
		int t=0;
		for(int i=0;i<a;i++){
			k[t++]=h;
		}
		int dem=0;
		for(int i=0;i<t-1;i++){
			for(int j=0;j<t;j++){
				if(k[i]==k[j]){
					dem++;
				}
			}
			if(dem==0){
				cout<<h<<"@ptit.edu.vn"<<endl;
			}
			else{
				cout<<h<<dem<<"@ptit.edu.vn"<<endl;
			}
		}	
	}
}

