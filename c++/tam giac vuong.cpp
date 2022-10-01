#include<bits/stdc++.h>
using namespace std;
long long kt(long long s[],int n){
    unordered_set<double> k;
	for(int i=0;i<n;i++){
		k.insert(s[i]);
	}
	for(int i=0;i<n;i++){
		if(s[i]>0){
			for(int j=i+1;j<n;j++){
				double tmp=sqrt(s[i]*s[i]+s[j]*s[j]);
				if(k.find(tmp)!=k.end()){
					return 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		if(kt(s,n)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
}

