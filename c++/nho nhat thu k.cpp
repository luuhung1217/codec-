#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	long n,k;
    	cin>>n>>k;
    	long s[100000];
    	for(int i=0;i<n;i++){
    		cin>>s[i];
		}
		sort(s,s+n);
			cout<<s[k-1]<<endl;
		
	}
}

