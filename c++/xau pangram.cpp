#include<bits/stdc++.h>
using namespace std;
int main (){
	int a;
	cin>>a;
 
	while(a--){	
		string s;
        int b;
		cin>>s>>b;
		int s1[200];
			for(int i='a';i<='z';i++){
				s1[i]=0;
		    }
		    for(int i=0;i<s.size();i++){
				for(int j='a';j<='z';j++ ){
					if(s[i]==j){
						s1[j]=1;
					}	
				} 
		    }int dem=0;
		    for(int i='a';i<='z';i++){
			    if(s1[i]==1){
			    	dem++;
				}
		    }
		if(dem<=b){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
 
 
}
