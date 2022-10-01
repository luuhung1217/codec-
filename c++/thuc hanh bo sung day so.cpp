#include<bits/stdc++.h>
using namespace std;
int main(){
 	int n;
 	cin>>n;
 	int s[201],b[201];
 	for(int i=0;i<=201;i++){
 		b[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>s[i];
		b[s[i]]=1;
	} 
	int dem=0;
	for(int i=1;i<=s[n];i++){
		if(b[i]==0){
			cout<<i<<endl;
			dem++;
		}
	}
	if(dem==0){
		cout<<"Excellent!"<<endl;
	}
	return 0;
}

