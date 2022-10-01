#include<bits/stdc++.h>
using namespace std;
void sx(int s[100][100],int a){
	int s2[100],t=0;
	 for(int i=0;i<a;i++){
    		for(int j=0;j<a;j++){
    			s2[t]=s[i][j];
    			t++;
			}
		}
		sort(s2,s2+t);
		int h=0;
	for(int i=0;i<a;i++){
    	for(int j=0;j<a;j++){
    		s[i][j]=s2[h];
    		h++;
		}
	}
}
int main (){
    int a;
    cin>>a;
    int s[100][100];
    for(int i=0;i<a;i++){
    	for(int j=0;j<a;j++){
    		cin>>s[i][j];
		}
	}
	sx(s,a);
	for(int i=0;i<a*a;i++){
    	
    		cout<<s[i]<<" ";
		
	}cout<<endl;
}

