#include<bits/stdc++.h>
using namespace std;
void nhap(int s[],int b){
	for(int i=0;i<b;i++){
		cin>>s[i];
	}
}
long long tong(int s1[],int b,int s2[],int c){
	long long sum1=0,sum2=0,max=0;
	for(int i=0;i<b;i++){
		sum1+=s1[i];
		 sum2=0;
		for(int j=i+1;j<c;j++){
			sum2+=s2[j];
		}
		if((sum1+sum2)>max){
			max=sum1+sum2;
		}
	}
	return max;
}
int main (){
    int a;
    cin>>a;
    while(a--){
    	int b,c;
    	cin>>b>>c;
    	int s1[b],s2[c];
    	nhap(s1,b);
    	nhap(s2,c);
    	long long tong1,tong2;
    	tong1=tong(s1,b,s2,c);
    	tong2=tong(s2,c,s1,b);
    	if(tong1<tong2){
    		cout<<tong2<<endl; 
		}
    	else{
    		cout<<tong1<<endl;
		} 
	}
}

