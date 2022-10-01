#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream fp;
	fp.open("DATA.in");
	int s[100000];
	int t=0;
	while(!fp.eof()){
		int x;
		fp>>x;
		s[t++]=x;
	} 
	int cnt[100000];
	for(int i=0;i<100000;i++) cnt[i]=0;
	for(int i=0;i<t-1;i++){
		cnt[s[i]]++;
	}
	for(int i=0;i<100000;i++){
		if(cnt[i]>0){
			cout<<i<<" "<<cnt[i]<<endl;
		}
	}
	fp.close();
}

