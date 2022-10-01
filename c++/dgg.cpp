#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,m;
		cin>>n>>m;
		long long s[1000000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		int check=0;
		for(int i=0;i<n;i++){
			if(s[i]==m){
				check==i;
				break;
			}
		}
		cout<<check;
	}
}

