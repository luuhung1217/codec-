#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   int b,c;
   for(int i=1;i<=a;i++){
   	cin>>b>>c;
   	int s[1000],dem=0;
   		for(int j=0;j<b;j++){
   			cin>>s[j];
		}
		for(int j=0;j<b;j++){
			if(s[j]==c){
				dem++;
			}
		}
		cout<<dem<<endl;
   }
}

