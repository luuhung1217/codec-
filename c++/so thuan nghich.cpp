#include<bits/stdc++.h>
using namespace std;
int tn(long long a){
	int dem=0,s[20];
	while(a>0){
		s[dem++]=a%10;
		a/=10;
	}
	for(int i=0;i<dem/2;i++){
		if(s[i]!=s[dem-i-1]){
			return 0;
		}
	}
	return 1;
}
int main (){
    int a;
    cin>>a;
    long long b;
    for(int i=1;i<=a;i++){
    	cin>>b;
    	if(tn(b)){
    		cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}

