#include<bits/stdc++.h>
using namespace std;
void nhap(int s[1000][1000],int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>s[i][j];
		}
	}
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int s[1000][1000],s1[1000][1000];
    nhap(s,a,b);
    nhap(s1,b,c);
    int k[1000][1000];
    for(int i=0;i<a;i++){
		for(int j=0;j<c;j++){
			for(int t=0;t<b;t++){
				k[i][j]+=s[i][t]*s1[t][j];
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<c;j++){
		     cout<<k[i][j]<<" ";
		}
		cout<<endl;
	}
}

