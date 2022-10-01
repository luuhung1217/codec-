#include<bits/stdc++.h>
using namespace std;
void nhap(long long  s[],long long a){
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
}
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	long long n;
    	cin>>n;
    	long long s[1000000];
    	nhap(s,n);
    	sort(s,s+n);
    	int tmp=s[n-1]-s[n-2];
    	for(int j=0;j<n-1;j++){
    		if(s[j+1]-s[j]<tmp){
    			tmp=s[j+1]-s[j];
			}
		}
		cout<<tmp<<endl;
	}
}

