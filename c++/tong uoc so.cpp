#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
	cin>>a;
	int s[a];
	for(int i=1;i<=a;i++){
		cin>>s[i];
	}
	long long tong=0;
	for(int i=1;i<=a;i++){
		int sum=0;
		for(int j=1;j<=sqrt(s[i]);j++){
			if(s[i]%j==0){
				sum+=j;
				if(s[i]/j!=j){
					sum+=s[i]/j;
				}
			}
			
		}
		cout<<sum;
	}
	
	return 0 ;
}

