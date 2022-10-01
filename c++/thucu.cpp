#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
        char s[100000];
    	cin>>s;
    	int x=strlen(s);
    	char tmp;
    	for(int i=0;i<x-1;i++){
    		for(int j=i+1;j<x;j++){
    			if(s[i]>s[j]){
    				tmp=s[i];
    				s[i]=s[j];
    				s[j]=tmp;
				}
			}
		}
		char s1[100000];
		int t=0,sum=0;
		for(int i=0;i<x;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s1[t]=s[i];
				t++;
			}
		}
		for(int i=0;i<x;i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum+=s[i]-48;
			}
		}
		for(int i=0;i<t;i++){
			cout<<s1[i];
		}
		cout<<sum;
		cout<<endl;
	}
}


