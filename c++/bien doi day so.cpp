#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int dau=0,cuoi=n-1,count=0;
		while(dau<=cuoi){
			if(s[dau]==s[cuoi]){
				dau++;
				cuoi--;
			}
			else if(s[dau]<s[cuoi]){
				dau++;
				s[dau]+=s[dau-1];
				count++;
			}
			else{
				cuoi--;
				s[cuoi]+=s[cuoi+1];
				count++;
			}
		}
		cout<<count<<endl;
	}
}

