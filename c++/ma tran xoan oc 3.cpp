#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	int b,c,k;
    	cin>>b>>c>>k;
    	int s[100][100];
    	for(int i=0;i<b;i++){
    		for(int j=0;j<c;j++){
    			cin>>s[i][j];
			}
		}
		int sohang=b,socot=c,d=0,gt=0;
		int s1[100],t=0;
		while(gt<b*c){
			for(int i=d;i<socot;i++){
				s1[t++]=s[d][i];
				gt++;
			}
			for(int i=d+1;i<sohang;i++){
				s1[t++]=s[i][socot-1];
				gt++;			
			}
			for(int i=socot-2;i>=d;i--){
				s1[t++]=s[sohang-1][i];
				gt++;
			}
			for(int i=sohang-2;i>d;i--){
				s1[t++]=s[i][d];
				gt++;
			}
			sohang--;socot--;d++;
		}
		cout<<s1[k-1]<<endl;
	}
}
