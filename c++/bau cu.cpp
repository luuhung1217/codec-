#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int s[a];
	int k[10000]={};
	for(int i=0;i<a;i++){
		cin>>s[i];
		k[s[i]]++;
	}
	cout<<endl;
	sort(k,k+a);
	int max=0;
	for(int i=0;i<a;i++){
		cout<<k[s[i]];
	}
	cout<<max;
	int h=0,max2=-1;
	for(int i=0;i<a;i++){
		if((k[s[i]]>max2)&&(k[s[i]]<max)){
			max2=k[s[i]];
			//h=s[i];
		}
		
	}
	cout<<max2;
	if(max2!=-1){
		cout<<h;
	}
	else{
		cout<<"NONE";
	}
}

