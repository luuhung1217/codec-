#include<bits/stdc++.h>
using namespace std;
int main (){
  int a;
  cin>>a;
  cin.ignore();
  while(a--){
  	string s;
    getline(cin,s);
    int soluog=1;
    for(int i=0;i<s.size();i++){
    	if(s[i]==' '||s[i]=='\t'||s[i]=='\n'){
    		soluog++;
		}
	}
	int dem1=0,dem2=0;
	for(int i=0;i<s.size();i++){
    	if(s[i]!=' '&&s[i+1]==' '||i==s.size()-1){
    		if((s[i]-48)%2==0){
    			dem1++;
			}
    		else {
    			dem2++;
			}
		}
	}
	if(dem1>dem2){
		if(soluog%2==0){
			cout<<"YES";
		}
		else cout<<"NO";
	}
	if(dem1<dem2){
		if(soluog%2!=0){
			cout<<"YES";
		}
		else cout<<"NO";
	}
	cout<<endl;
  }
   
}

