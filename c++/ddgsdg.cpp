#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		long long a,b;
		cin>>a>>b;
		long long s[100000];
		for(int i=0;i<a;i++){
			cin>>s[i];
		}
		long long check=0;
		for(int i=0;i<a;i++){
			if(s[i]>check){
				check=s[i];
			}
		}
		for(int i=0;i<a;i++){
			if(s[i]==check){
				for(int j=a;j>i;j--){
					s[j]=s[j-1];
				}	
				s[i]=b;
				break;
			}
		}
		for(int i=0;i<a+1;i++){
			if(s[i]<0){
				cout<<s[i]<<" ";
			}
		}
		for(int i=0;i<a+1;i++){
			if(s[i]>=0){
				cout<<s[i]<<" ";
			}
		}
		cout<<endl;
	}

}

