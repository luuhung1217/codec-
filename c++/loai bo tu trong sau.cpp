#include<bits/stdc++.h>
using namespace std;
int main (){
      string s,s1;
     getline(cin,s);
      getline(cin,s1);
	  int x=s.size();
		int y=s1.size();
		for(int i=0;i<x;i++){
			if(s[i]==s1[0]&&(s[i+y-1]==s1[y-1])){
				int j;
				for( j=i;j<x;j++){
					s[j]=s[j+y];
				}
			}
				
		}
       cout<<s;
}

