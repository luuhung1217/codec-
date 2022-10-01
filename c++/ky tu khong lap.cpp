#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    while(n--){
    	string s;
    	cin>>s;
    	int dem;
    	for(int i=0;i<s.size();i++){
    		 dem=1;
    		for(int j=i+1;j<s.size();j++){
    			if(s[i]==s[j]){
    				dem++;
    				s[j]=-1;
				}
				
			}
			if(s[i]!=-1&&dem==1){
					cout<<s[i];
				}	
		}
		cout<<endl;
	}
}

