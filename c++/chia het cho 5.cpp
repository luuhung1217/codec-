#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    while(a--){
    	string s;
    	cin>>s; 
		int sum=0;
		for(int i=0;i<s.size();i++){
    		if(s[s.size()-1-i]=='1'){
    			if(i%4==0)
    				sum+=1;
				else if(i%4==1)
					sum+=2;
				else if(i%4==2)
					sum+=4;
				else if(i%4==3)
					sum+=3;
			}
		}
		if(sum%5==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
    	
	}
}

