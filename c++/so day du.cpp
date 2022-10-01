#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	string s;
    	cin>>s;
    	int s1[1005];
    	int kt=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]<'0'||s[i]>'9'){
    			kt=1;
    			break;
			}
		}
    	for(int i='0';i<='9';i++){
    		s1[i]=0;
		}
		for(int i=0;i<s.size();i++){
			for(int j='0';j<='9';j++){
				if(s[i]==j){
					s1[j]=1;
				}
			}
		}
		int dem=0;
		for(int i='0';i<='9';i++){
			if(s1[i]==0){
				dem++;
			}
		}
		if(s[0]=='0'||kt==1){
			cout<<"INVALID"<<endl;
		}
		else{
			if(dem>0){
				cout<<"NO"<<endl;
			}
			else if(dem==0){
				cout<<"YES"<<endl;
			}
		}
	}
}

