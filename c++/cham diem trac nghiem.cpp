#include<bits/stdc++.h>
using namespace std;
int main (){
     int a;
     cin>>a;
     while(a--){
     	char c[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
		char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
     	 int d;
     	 cin>>d;
		 string s;
		 getline(cin,s);
		 int j=0,t;
		 for(j=0,t=0;j<s.size();j++){
		 	if(s[j]!=32){
		 		s[t]=s[j];
		 		t++;
		 	}
		 }
		 int dem=0;
		 if(d==101){
		 	for(int i=0;i<t;i++){
		 	   if(s[i]==c[i]){
		 	   	dem++;
				}
		    }
		 }
		 if(d==102){
		 	for(int i=0;i<t;i++){
		 	   if(s[i]==b[i]){
		 	   	dem++;
				}
		    }
		 }
		 float x=(float)dem*2/3;
		 cout<<fixed<<setprecision(2)<<x<<endl;
	 }
}

