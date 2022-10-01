#include<bits/stdc++.h>
#include<fstream> 
using namespace std;

int main(){
	ofstream fp;
	fp.open("Nhom6.txt",ios::out);
	string s;
	getline(cin,s);
	fp<<s;
	fp.close();
	
	ifstream fp1;
	fp1.open("Nhom6.txt");
	string text;
	getline(fp1,text);
	fp1.close();
	cout<<text;
}

