#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
    	int b,s[100000],c[100000];
    	cin>>b;
		for(int j=1;j<=b;j++)
		    cin>>s[j];
    	for(int j=1;j<=b;j++)
    		c[j]=1;
    		int dem=1,sum=0;
    		for(int j=1;j<b;j++){
    		 	dem=1;
    		    if(c[j]){
    				c[j]=0;
    				for(int k=j+1;k<=b;k++){
    					if(s[j]==s[k]){
    						dem++;
    						c[j]=0;	
    				    }
				    }  
				    if(dem>1)
				       sum+=dem; 
			    }
		    }
		    cout<<sum<<endl;
	}
	return 0;
}


