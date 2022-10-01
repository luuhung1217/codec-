#include<bits/stdc++.h>
using namespace std;
int main (){
 int a;
 cin>>a;
 string s;
 for(int i=0;i<a;i++){
 	cin>>s;
 	int b=s.size();
 	if(s[b-2]==56&&s[b-1]==54){
 		cout<<1;
	 }
 	else{
 		cout<<0;
	 }
 	cout<<endl;
 }
}

