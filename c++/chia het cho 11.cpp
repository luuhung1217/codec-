#include<bits/stdc++.h>
using namespace std;
int main (){
   int n;
   cin>>n;
   while(n--){
	   string s;
	   cin>>s;
	   int x=s.size();
	   int sum1=0,sum2=0;
	   for(int i=0;i<x;i++){
	   	    if(s[i]>='0'&&s[i]<='9'){
	   	    	 s[i]-=48;
			   }
	   }
	   for(int i=0;i<x;i++){
	   	    if(i%2==0){
	   	    	sum1+=s[i];
			}
			else{
				sum2+=s[i];
			}
	   }
	   if((sum2-sum1)%11==0){
	   	   cout<<"1"<<endl;
	   }
	   else{
	   		cout<<"0"<<endl;
	   }
   }
}

