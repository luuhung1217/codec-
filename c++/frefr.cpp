#include<bits/stdc++.h>
using namespace std;
int kt(int s[],int n){
	for(int i=0;i<n;i++){
		if(s[i]>255){
			return 0;
		}
		return 1;
	}
	
}
int main(){
	int a;
	cin>>a;
	cin.ignore();
	while(a--){
		string s;
		cin>>s;
		int s1[10000];
		int dem=0;
		int j=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]>='0'&&s[i]<='9'){
				int so=0;
				 j=i;
    			while(j<s.size()&&(s[j]>='0'&&s[j]<='9')){
    				so=so*10+(int)s[j]-48;
    				 j++;
				}
    			s1[dem++]=so;
    			i=j;
			}
		}
		if(kt(s1,dem)==1&&dem==4){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

