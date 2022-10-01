#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	while(test--){
		long long m,n;
		cin>>m>>n;
		int s[10000];
		for(int i=0;i<m;i++){
			cin>>s[i];
		}
	
		int max=0;
		for(int i=0;i<m;i++){
			if(s[i]>max){
				max=s[i];
			}
		}
		for(int i=0;i<m;i++){
			if(s[i]==max){
				for(int j=m;j>i;j--){
					s[j]=s[j-1];
				}
				s[i]=n;
				break;
			}
		}
		for(int i=0;i<m+1;i++){
			if(s[i]<0){
				cout<<s[i]<<" ";
			}
		}
		for(int i=0;i<m+1;i++){
			if(s[i]>=0){
				cout<<s[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

