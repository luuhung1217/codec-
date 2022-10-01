#include<bits/stdc++.h>
using namespace std;
int  tong(int s[],int n){
	long sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		sum1=0;
		for(int j=0;j<i;j++)
			sum1+=s[j];
	    sum2=0;
	    for(int j=i+1;j<n;j++){
			sum2+=s[i];
	}
	if(sum1==sum2)
	    return 1;
	}
	return -1;
}

int main() {
	 int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int n;
    	cin>>n;
    	int s[100000];
    	for(int j=0;j<n;j++){
    		cin>>s[j];
		}
		  cout<<tong(s,n);
		cout<<endl;
	}
	return 0;
}
