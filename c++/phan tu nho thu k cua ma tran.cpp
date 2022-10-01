#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	int n,k;
    	cin>>n>>k;
    	int s[10004][10004];
    	int s1[10004],t=0;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin>>s[i][j];
			}
		}
		for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			s1[t]=s[i][j];
    			t++;
			}
		}
		sort(s1,s1+t);
		cout<<s1[k-1]<<endl;
	}
}

