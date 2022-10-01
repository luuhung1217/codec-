#include<bits/stdc++.h>
using namespace std;
void xoa(char s[],int b){
	for(int i=b;i<strlen(s);i++){
			s[i]=s[i+1];		
	}
}
void hoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '&&s[i+1]==' '||s[i]==' '&&s[i-1]==' '){
			xoa(s,i);
		}
		
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
	}
}
void chucuoi(char s[]){
	int kt=0;
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]==' '){
			kt++;
		}
		if(kt==1&&s[i]==' '){
			s[i]=',';
			for(int j=i;j<strlen(s);j++){
				if(s[j]>='a'&&s[j]<='z'){
					s[j]-=32;
				}
			}
		}
	}
}
void thuong(char s[]){
	for(int i=1;i<strlen(s);i++){
		if(s[i-1]!=' '&&s[i]!=' '){
			s[i]+=32;
		}
	}
}
int main (){
    char s[101];
    cin.getline(s,100);
    hoa(s);
	thuong(s);
	chucuoi(s);
	for(int i=0;i<strlen(s);i++){
		cout<<s[i];
		if(s[i]==','){
		    cout<<" ";
		}
	}
    
}

