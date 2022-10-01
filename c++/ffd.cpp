#include<bits/stdc++.h>
using namespace std;
int khoangcach(int s[],long long a,long long b){
	std::set<int> k;
	for(int i=0;i<a;i++){
		k.insert(s[i]);
	}
	for(int i=0;i<a;i++){
		int sum=s[i]+b;
			if(k.find(sum)!=k.end()){
			return 1;
		}
	}
	return 0;
}
int main (){
    int test;
    cin>>test;
    while(test--){
    	long long a,b;
    	cin>>a>>b;
    	int s[100000];
    	for(int i=0;i<a;i++){
    		cin>>s[i];
		}
		
		if(khoangcach(s,a,b)){
			cout<<"1";
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
}

