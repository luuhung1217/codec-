#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	int N;
	cin>>N;
	cin.ignore();
	ofstream f;
	f.open("A.txt",ios::out);
	
	while(N--){
		string s;
		getline(cin,s);
		f<<s<<endl;	
		
	}
	f.close();
	f.open("A.txt",ios::in);
	ofstream fpB;
	fpB.open("B.txt");
	while(!f.eof()){
	 string s;
	 getline(f,s);
	fpB<<s<<endl;
	}
	fbB.close();
	f.close();
}

