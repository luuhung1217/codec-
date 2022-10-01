#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int b;
    	cin>>b;
		int dem=0;
		int s[100000];
    	for(int j=2;j<=b;j++){
    		while(b%j==0){
    		b/=j;
    		s[dem]=j;
    		dem++;
			}
		}
		int count=0;
		for(int j=0;j<dem-1;j++){
			for(int k=j+1;k<dem;k++){
				if(s[j]!=s[k]){
				count++;
			}
			}
			
		 }
		 if(count==dem&&dem==3){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}

