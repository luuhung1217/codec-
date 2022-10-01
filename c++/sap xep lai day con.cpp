#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		long long s[a];
		for(int i=0;i<a;i++){
			cin>>s[i];
		}
		int so;
		for(int i=0;i<a-1;i++){
			
			for(int j=i+1;j<a;j++){
				if(s[i]>s[j])
					
					so=i;
					break;
				
			}
		}
		cout<<so<<endl;
	} 

}

