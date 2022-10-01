#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fp;
	fp.open("VANBAN.in");
	string b="";
	while(!fp.eof()){
		string a;
		fp >> a;
		b+= ' ' + a;
	
	}
	cout << b;
	fp.close();
	return 0;
}
