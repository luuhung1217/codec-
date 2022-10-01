#include<bits/stdc++.h> 
using namespace std;
int main(){
	fstream fp;
	fp.open("PTIT.in", ios::out);
	string name;
	getline(cin, name);
	fp << name << endl;
	
	fp.close();
	fp.open("PTIT.in", ios::in);
	ofstream fpB;
	fpB.open("PTIT.out");
	while(!fp.eof()){
		string name;
		getline(fp, name);
		fpB << name << endl;
	}
	fpB.close();
	fp.close();
}
