#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		long n;
		cin>>n;
		long long s[n];
		for(int j=0;j<n;j++){
			cin>>s[j];
		} 
		long long s1[n],dem=0;
		for(int j=0;j<n;j++){
			long long x=s[j];
			 while(x>0){
			 	s1[dem++]=x%10;
			 	x/=10;
			 }
		} 
		//sort(s1,s1+dem);
		for(int j=0;j<dem;j++){
			//if(s[j]!=s[j+1]){
				cout<<s1[j]<<" ";
			//}
		
		} 
		cout<<endl;
	} 
}

