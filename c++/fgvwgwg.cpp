#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	fstream f;
	f.open("PTIT.out.txt");
	string s;
	getline(cin, s);
	f<< s ;
	f.close();
	f.open("PTIT.out.txt");
	fstream f1;
	f1.open("PTIT.in.txt");
	while(!f.eof()){
		string s;
		getline(f, s);
		f1 << s << endl;
	}
	f1.close();
	f.close();
}
