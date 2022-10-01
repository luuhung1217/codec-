#include<bits/stdc++.h>
using namespace std;
void  xoa(char s[],int b){
	int x=strlen(s);
	for(int i=b;i<x;i++){
		s[i]=s[i+1];
	}
}
 void thuong(char s[]){
 	string h;
 	for(int i=0;i<x;i++){
 		if(s[i]==' '&&s[i+1]==' '||s[i]==' '&&s[i-1]==' '){
 			xoa(s,i);
		 }	 
	 }
	 for(int i=0;i<strlen(s);i++){
    		if(s[i]>='A'&&s[i]<='Z'){
    			 s[i]+=32;
			}
		}
		int tmp=0;
		for(int i=strlen(s)-1;i>=0;i--){
			if(s[i]!=' '&&s[i+1]==' '){
				tmp=i;
				break;
			}
		}
		for(int i=tmp;i<strlen(s);i++)
		    h+=s[i];
		    h+=s[0];
		for(int i=0;i<strlen(s);i++){
			if(s[i]==' '&&s[i+1]!=' '){
				h+=s[i+1];
			}
		}
		cout<<h<<"@ptit.edu.vn"<<endl;
 }
int main (){
    int a;
    cin>>a;
    while(a--){
    	char s[103];
    	cin.getline(s,100);
    	thuong(s);
	}
}

