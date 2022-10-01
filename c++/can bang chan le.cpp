#include<bits/stdc++.h>
using namespace std;
int cb(int a){
	int count=0,dem=0,s=0;
	while(a>0){
		s=a%10;
		a/=10;
		count++;
		if(s%2==0){
			dem++;
		}
	}
	if(dem==(count/2)){
		return 1;
	}
	return 0;
}
int main (){
    int n;
    cin>>n;
    int x=pow(10,n-1);
    int y=pow(10,n);
    int dem=0;
    if(n%2==0){
    	for(int i=x;i<y;i++){
    		if(cb(i)){
    		 	 dem++;
			  	cout<<i<<" ";
		 	 	if(dem==10){
		 	 	cout<<endl;
		 	 	dem=0;
		 	 	}
			}
		}
	}
}

