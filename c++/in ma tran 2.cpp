#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int N;
		cin>>N;
		int s[50][50],s1[50][50],s2[50][50];
		//int size=N*4*4*N;
		int gt=0,d=1,hang=4*N,cot=4*N;
		int k=0;
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				s[i][j]=gt++;
			}
		} 
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				cout<<s[i][j]<<" "; 
			}
			cout<<endl;
		} 
		//while(gt<size/2){
		//	for(int i=cot-2;i>=0;i--){
		//		s 
		//	}
		//}
	} 
}

