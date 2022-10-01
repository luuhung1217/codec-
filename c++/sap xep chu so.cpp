#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		long n;
		cin>>n;
		long long s[10000];
		for(int j=0;j<n;j++){
			cin>>s[j];
		} 
		long long s1[10000],dem=0,count=1,c[10000];
		for(int j=0;j<n;j++){
			 while(s[j]>0){
			 	s1[dem]=s[j]%10;
			 	s[j]/=10;
			 	dem++;
			 }
		} 
		sort(s1,s1+dem);
		for(int j=0;j<dem;j++)
			c[j]=1;
		for(int j=0;j<dem;j++){
			count=1;
			if(c[j]){
				c[j]=0;
				for(int t=j+1;t<dem;t++){
					if(s1[j]==s1[t]){
						count++;
				         c[t]=0;	
			        }
				}
				if(count>0)
				cout<<s1[j]<<" ";
			}
		} 
		cout<<endl;
	} 
}

