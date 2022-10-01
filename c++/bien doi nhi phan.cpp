#include<bits/stdc++.h>
using namespace std;
void nhap(int s[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>s[i][j];
		}
	}
}
int main (){
    int a;
    cin>>a;
    while(a--){
    	int n,m;
    	cin>>n>>m;
    	int s[100][100];
    	nhap(s,n,m);
    	int s1[100][100];
    	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			    if(s[i][j]==1){
			    for(int k=0;k<n;k++){
					for(int l=0;l<m;l++){
			    	s1[k][j]=1;
			    	s1[i][l]=1;
			    	}
			    	
				}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
		        cout<<s1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}

