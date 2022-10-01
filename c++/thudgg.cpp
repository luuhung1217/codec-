#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	string s;
    	cin>>s;
    	int j;
    	long long sum=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]>='0'&&s[i]<='9'){
				int so=0;
				 for( j=i;j<s.size();j++){
    				if(s[j]>='0'&&s[j]<='9'){
    					so=so*10+(int)s[j]-48;
					}
    					
    				
    				sum+=so;
				}
    			
    			//i=j;
			}
		}
		cout<<sum<<endl;
	}
}

