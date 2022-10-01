#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	fstream f;
	f.open("A.txt");

	while(n--){
		string s;
		getline(cin, s);
		f<< s <<endl;
	
		}
	f.close();
	f.open("A.txt");
	fstream f1;
	f1.open("B.txt");
	while(!f.eof()){
		string s;
		getline(f, s);
		f1 << s << endl;
	}
	f1.close();
	f.close();
}
