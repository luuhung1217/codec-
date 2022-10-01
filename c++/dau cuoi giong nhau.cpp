#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
	cin>>a;
	while(a--){
		string s;
		cin>>s;
		int x=s.size();
		int dem=0;
		for(int i=0;i<x;i++){
			for(int j=i+1;j<x;j++){
				if(s[i]==s[j]){
					dem++;
				}
			}
		}
		cout<<dem+x<<endl;
	}
	 
}

