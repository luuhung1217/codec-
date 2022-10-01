#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	fstream f;
	f.open("A.text",ios::app);
	while(N--){
		string s;
		getline(cin,s);
		f<<s<<endl;	
	}
	f.close();
	f.open("A.text",ios::in);
}

