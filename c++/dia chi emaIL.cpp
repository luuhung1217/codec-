#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,h;
    getline(cin,s);
    int k=s.size();
    for(int i=0;i<=k;i++){
    	if(s[i]>='A'&&s[i]<='Z'){
    		s[i]+=32;
		}
	}
	int tmp=0;
	int check=0;
	for(int i=k-1;i>=0;i--){
		if((s[i]!=' ')&&(s[i-1]==' ')){
			tmp=i;
			break;
		}
	}
	for(int i=tmp;i<k;i++)
		h+=s[i];
			h+=s[0];	
	for(int i=0;i<tmp-1;i++){
		if((s[i]==' ')&&(s[i+1]!=' ')){
			h+=s[i+1];
	     }
	}
	cout<<h<<"@ptit.edu.vn";
}

