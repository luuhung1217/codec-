#include<bits/stdc++.h>
using namespace std;
int main(){
	set<string>s1;
	int a;
	cin>>a;
	cin.ignore();
	while(a--){
		scanf("\n");
		string s;
		getline(cin,s);
		s1.insert(s);
	} 
	cout<<s1.size();
	return 0;
}

