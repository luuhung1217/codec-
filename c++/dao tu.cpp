#include<bits/stdc++.h>
using namespace std;	
int main (){
  int a;
  cin>>a;
  cin.ignore();
  for(int n=1;n<=a;n++){
  	string s;
  	getline(cin,s);
  	    int k=s.size();
  		int j=k-1;
  	    for(int i=k-1;i>=0;i--){
  	    		if(s[i]==' '){
  	    			for(int t=i+1;t<=j;t++)
  	    				cout<<s[t];
  	    				j=i-1;
  	    				cout<<" ";
			    }
				if(i==0){
					for(int t=i;t<=j;t++)
						cout<<s[t];
				}
		  }
	cout<<endl;	
  	}
}

