#include<bits/stdc++.h>
using namespace std;
void nhap(int s[100][100],int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin>>s[i][j];
		}
	}
}
int main (){
   int a;
   cin>>a;
   while(a--){
   	  	int b;
   	  	cin>>b;
   	  	int s[100][100];
   	  	nhap(s,b);
   	  	int s1[200];
   	  	int t=0,gt=0,d=0,k=1;
   	  	while(gt<b*b){
   	  		for(int i=0;i<b;i++){
   	  			s1[t++]=s[d][i];
   	  			gt++;
			}
			for(int i=b-1;i>=0;i--){
				s1[t++]=s[k][i];
				gt++;
			}
			d=d+2;k=k+2;
		}
		for(int i=0;i<b*b;i++){
			cout<<s1[i]<<" ";
		}
		cout<<endl;
   }
}

