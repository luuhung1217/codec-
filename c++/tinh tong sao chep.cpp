#include<bits/stdc++.h>
using namespace std;
int number(string text){
	if(text.size()>10){
		return 0;
	}
	for(int i=0;i<text.size();i++){
		if(text[i]<'0'||text[i]>'9'){
			return 0;
		}
	}
	return 1;
}
int convert(string text){
	stringstream ss(text);
	int x;
	ss>>x;
	return x;
}
int main(){
	fstream fp;
	fp.open("DATA.in");
	long long s=0;
	while(!fp.eof()){
		string text;
		fp>>text;
		if(number(text)){
			s+=convert(text);
		}
	}
	cout<<s;
	fp.close(); 
}

