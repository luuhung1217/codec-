#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],b[1000],dem=0;
	cin>>n;
	for(int i=0;i<=1000;i++){
		b[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	for(int i=1;i<=a[n];i++){
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

