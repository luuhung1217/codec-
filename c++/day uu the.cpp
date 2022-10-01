#include<bits/stdc++.h>
using namespace std;
int sochan(int a){
	if(a%2==0){
		return 1;
	}
	return 0;
}
int sole(int a){
	if(a%2!=0){
		return 1;
	}
	return 0;
}

int main (){
  int a;
  cin>>a;
  for(int i=1;i<=a;i++){
  	 int s[201];
  	 for(int j=1;j<200;j++){
  	 	cin>>s[j];
	   }
	   int dem=0; 
	   for(int j=1;j<200;j++){
  	 	  if(s[j]!=0){
  	 	  	dem++;
			 } 
	   }
	    int count1=0,count2=0;
		for(int j=1;j<200;j++){
			if(s[i]%2==0){
				count1++;	
			}
			else{
				count2++;
			}
		}
    	if(count1>count2&&sochan(dem)||count1<count2&&sole(dem)){
			cout<<"YES"<<endl;
		}  
		else{
			cout<<"NO"<<endl;
		}	   
  	}
}

