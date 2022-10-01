 #include<bits/stdc++.h>
using namespace std;
int main(){
	fstream fp;
	fp.open("DATA.in");
	int n,m;
	fp>>n>>m;
	int s1[100],s2[100];
	int dem1=0,dem2=0;
	while(!fp.eof()&&dem1<n){
		int x1;
		fp>>x1;
		s1[dem1++]=x1;
	}
	while(!fp.eof()&&dem2<m){
		int x2;
		fp>>x2;
		s2[dem2++]=x2;
	}
	set<int>so1;
	set<int>so2;
	for(int i=0;i<dem1;i++){
		so1.insert(s1[i]);
	}
	for(int i=0;i<dem2;i++){
		if(so1.find(s2[i])!=so1.end()){
			so2.insert(s2[i]);
		}
	}
	for(int j:so2){
		cout<<j<<" ";
	}
	fp.close();
}

