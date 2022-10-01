#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string N;
		cin>>N;
		long long M;
		cin>>M;
		long long s[10000],so=0;
		for(int i=0;i<N.size();i++){
			s[i]=N[i]-48;
		}
		for(int i=0;i<N.size();i++){
			so=(so*10+s[i])%M;
		}cout<<so;
		cout<<endl;
	}
}

