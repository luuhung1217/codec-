#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	string s;
    	cin>>s;
    	long long sum=0;
    	int j=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]>='0'&&s[i]<='9'){
				int so=0;
				 j=i;
    			while(j<s.size()&&(s[j]>='0'&&s[j]<='9')){
    				so=so*10+(int)s[j]-48;
    				 j++;
				}
    			sum+=so;
    			i=j;
			}
		}
		cout<<sum<<endl;
	}
}

