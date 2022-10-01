#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		string h1[200];
		stringstream ss(s1);
		string tmp;
		int t=0;
		while(ss>>tmp){
			h1[t++]=tmp;
		}
		stringstream ss1(s2);
		string tmp2;
		string h2[200];
		int k=0;
		while(ss1>>tmp2){
			h2[k++]=tmp2;
		}
		std::set<string>x1;
		std::set<string>x2;
		for(int i=0;i<k;i++){
			x1.insert(h2[i]);
		}
		for(int i=0;i<t;i++){
			if(x1.find(h1[i])==x1.end()){
				x2.insert(h1[i]);
			}
		}
		for(string j:x2){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

