#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[25];
void tohop(int i){
	if(i>k){
		for(int i=1;i<=k;i++)
			cout<<x[i];
			cout<<endl;
			return;
	} 
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		tohop(i+1);
	}
}
int main(){
	int a;
	cin>>a;
	while(a--){
		cin>>n>>k;
		tohop(1);
	}
}

