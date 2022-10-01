#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   while(a--){
   	 int b;
   	 cin>>b;
   	 int min=10000,max=0, s[100000],dem=0;
   	 int s1[100000]={};
   	 for(int i=0;i<b;i++){
   	 	cin>>s[i];
		}
		for(int i=0;i<b;i++){
   	 	    if(s[i]>max){
   	 	    	max=s[i];
			}
			if(s[i]<min){
				min=s[i];
			}
			s1[s[i]]++;
		}
		for(int i=min;i<=max;i++){
			if(s1[i]==0){
			dem++;	
			}
			
		}
		cout<<dem<<endl;
   }
}

