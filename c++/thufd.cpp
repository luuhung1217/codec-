#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	fstream f;
	f.open("A.txt", ios::out);

	while(n--){
		string s;
		getline(cin, s);
		f<< s << endl;
	
		}
	f.close();
	f.open("A.txt", ios::in);
	fstream f1;
	f1.open("B.txt");
	while(!f.eof()){
		string s;
		getline(f,s);
		f1 << s << endl;
	}
	f1.close();
	f.close();
}
