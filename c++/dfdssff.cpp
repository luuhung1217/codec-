#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	fstream fp;
	fp.open("PTIT.in",ios::out);
	string s;
	getline(cin, s);
	fp<< s;
	fp.close();
	fp.open("PTIT.in",ios::in);
	fstream fp1;
	fp1.open("PTIT1.out");
	while(!fp.eof()){
		string s;
		getline(fp, s);
		fp1 << s ;
	}
	fp1.close();
	fp.close();
}
