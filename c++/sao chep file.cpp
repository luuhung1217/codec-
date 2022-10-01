#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	fstream fp;
	fp.open("A.txt", ios::out);

	for(int i=0; i < n; i++){
		string name;
		getline(cin, name);
		fp << name << endl;
	
		}
	fp.close();
	fp.open("A.txt", ios::in);
	ofstream fpB;
	fpB.open("B.txt");
	while(!fp.eof()){
		string name;
		getline(fp, name);
		fpB << name << endl;
	}
	fpB.close();
	fp.close();
}
