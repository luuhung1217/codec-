#include<bits/stdc++.h>
using namespace std;
void nhap(long long s[],long long a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	long long n,dem=0,s[1000000];
    	cin>>n;
    	nhap(s,n);
    	for(int j=0;j<n;j++){
    		if(s[j]!=0){
    			cout<<s[j]<<" ";
			}
			else{
				dem++;
			}
		}
		for(int j=0;j<dem;j++){
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}

