#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   cin.ignore();
   while(a--){
   	string s;
   	 cin>>s;
   	 int x=s.size();
   	 int dem=1;
   	 	for(int i=0;i<x;i++){
   	 		if(s[i]>='A'&&s[i]<='Z'&&s[i]==s[i+1]){
   	 			dem++;
   	 			s[i]=-1;
			}
			if(s[i]!=-1){
				cout<<s[i]<<dem;
				dem=1;
			}
		}
		cout<<endl;
   }
}

