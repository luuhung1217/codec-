#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[25];
void in(){
	for(int i=1;i<=k;i++)
		cout<<x[i];
		cout<<endl;
}
void tohop(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			in();
		}
		else {
			tohop(i+1);
		}
	}
}
int main(){
	int a;
	cin>>a;
	while(a--){
		cin>>n>>k;
		x[0]=0;
		tohop(1);
	}
}

