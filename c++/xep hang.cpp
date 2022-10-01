#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;
   int cho[101],check[101];
   int  sum1=0,sum2=0;
   for(int i=0;i<a;i++){
   	 cin>>cho[i];
   	 cin>>check[i];
   	 sum1+=cho[i];
   	 sum2+=check[i];
   }
   if(sum1>sum2){
   	  cout<<sum1;
   }
   if(sum1<sum2){
   		int min=1000000;
   		for(int i=0;i<a;i++){
   			if(cho[i]<min){
   				min=cho[i];
			}	
   		}
		cout<<sum2+min;
   }
   
}

