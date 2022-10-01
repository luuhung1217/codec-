#include<bits/stdc++.h>
using namespace std;
void sx(long long k[],int b){
	int tmp=0;
	for(int i=0;i<b-1;i++){
		for(int j=i+1;j<b;j++){
			if(k[i]>k[j]){
				tmp=k[i];
				k[i]=k[j];
				k[j]=tmp;
			}
		}
	}
}
int main (){
   int a;
   cin>>a;
   for(int i=1;i<=a;i++){
   	   int n,m;
   	   cin>>n>>m;
   	   long long s[n][m];
   	   long long k[n*m],dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			cin>>s[i][j];
		    }
	   }
   	   for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
		     	k[dem++]=s[i][j];
			}
		}
		sx(k,dem);
			for(int t=0;t<dem;t++){
		     	cout<<k[t]<<" ";
			}
		cout<<endl;
    }
}

