#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	long n;
    	cin>>n;
    	long  s[n];
    	for(int j=0;j<n;j++){
    		cin>>s[j];
    	}
		long  kt=1000001;
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(s[j]==s[k]){
					if(kt>k){
						kt=k;
					}
				}	
			}
		}
		if(kt==1000001){
			cout<<-1;
		}
		else {
			cout<<s[kt]; 
		}
		cout<<endl;
	}
}
