#include<bits/stdc++.h>
using namespace std;
int a;
int s[100]; 
void lk(int n){
	if(n>a){
		for(int i=1;i<=a;i++)
			cout<<s[i]; 
	    	cout<<" ";
	    	return;
	}
	for(int i=0;i<=1;i++){
		s[n]=i;
		lk(n+1);
	}
}
int main (){
	int b;
	cin>>b;
	while(b--){
	    cin>>a;
        lk(1);
        cout<<endl;
	}
}

