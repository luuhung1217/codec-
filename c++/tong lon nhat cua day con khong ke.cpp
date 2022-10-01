#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int a;
		cin>>a;
		int s[a],kt[a];
		for(int i=0;i<a;i++){
			cin>>s[i];
		}
		kt[0]=s[0];
		kt[1]=max(s[0],s[1]);
		for(int i=2;i<a;i++){
			kt[i]=max(kt[i-2]+s[i],kt[i-1]);
		}
		cout<<kt[a-1]<<endl;
	}
}

