#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		int n;
		cin>>n;
		long long s[100000];
		for(int j=0;j<n;j++){
			cin>>s[j];
		}
		
		long long s1[100000];
		long long m,k;
		for(int j=0;j<n;j++){
			if(j==n-1){
				s1[n-1]=s[n-2]*s[n-1];
			}
			else{
				s1[j]=s[j-1]*s[j+1];
			}
		}
		cout<<s[0]*s[1]<<" ";
		for(int j=0;j<n-1;j++){
			cout<<s1[j+1]<<" ";
		}
		cout<<endl;
	} 
}

