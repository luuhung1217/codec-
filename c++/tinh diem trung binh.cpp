#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	double s[100],tong=0;
	for(int i=0;i<N;i++){
		cin>>s[i];
	}
	sort(s,s+N);
	int dem=0;
	for(int i=0;i<N;i++){
		if(s[i]!=s[0]&&s[i]!=s[N-1]){
			tong+=s[i];
			dem++;
		}
	}
	cout<<fixed<<setprecision(2)<<tong/dem;
}

