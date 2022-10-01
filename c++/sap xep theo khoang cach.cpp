#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int a,n;
		cin>>a>>n;
		int s[a];
		for(int i=0;i<a;i++){
			cin>>s[i];
		}
		int t,j;
		for(int i=0;i<a;i++){
			t=s[i];
			j=i-1;
			while(j>=0&&abs(s[j]-n)>abs(t-n)){
			 	s[j+1]=s[j];
			 	j--;
			 }
			 s[j+1]=t;
		}
		for(int i=0;i<a;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}

