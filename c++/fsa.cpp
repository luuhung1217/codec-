#include<bits/stdc++.h>
using namespace std;
long long  tong(int s[],int n){
	long long sum1,sum2=0;
	for(int i=0;i<n;i++){
		sum1+=s[i];
	    sum2=0;
	    for(int j=i+1;j<n;j++){
			sum2+=s[j];
		}
		if(sum1==sum2){
			return i;
		}   	
	}
	return -1;
}

int main() {
	 int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int n;
    	cin>>n;
    	int s[n];
    	for(int j=0;j<n;j++){
    		cin>>s[j];
		}
		  cout<<tong(s,n);
		cout<<endl;
	}
	return 0;
}
