#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    int s[100][100];
    for(int i=0;i<a;i++){
    	for(int j=0;j<a;j++){
    		cin>>s[i][j];
		}
	}
	int s2[100],t=0;
	 for(int i=0;i<a;i++){
    		for(int j=0;j<a;j++){
    			s2[t]=s[i][j];
    			t++;
			}
		}
	sort(s2,s2+t);
	int s1[100][100];
	int cot=a,hang=a,gt=0,d=0;
	while(gt<a*a){
		for(int i=d;i<cot;i++){
			s1[d][i]=s2[gt];
			gt++;
		}
		for(int i=d+1;i<hang;i++){
			s1[i][cot-1]=s2[gt];
			gt++;
		}
		for(int i=cot-2;i>=d;i--){
			s1[hang-1][i]=s2[gt];
			gt++;
		}
		for(int i=hang-2;i>d;i--){
			s1[i][d]=s2[gt];
			gt++;
		}
		hang--;cot--;d++;
	}
	for(int i=0;i<a;i++){
    	for(int j=0;j<a;j++){
    		cout<<s1[i][j]<<" ";
		}
		cout<<endl;
	}
}

