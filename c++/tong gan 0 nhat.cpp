w#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	int b;
    	cin>>b;
    	int s[1000000];
    	for(int i=0;i<b;i++){
    		cin>>s[i];
		}
		long long min=1000000;
		for(int i=0;i<b-1;i++){
			for(int j=i+1;j<b;j++){
				if(abs(s[i]+s[j])<abs(min)){
					min=s[i]+s[j];
				}
			}
		}
		cout<<min<<endl;
	}
}

