#include<bits/stdc++.h>
using namespace std;
void nhap(long long s[],long long n){
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
} 
int sonho(long long s[],long long n,long long k){
	int dem1=0,dem2=0;
	for(int i=0;i<n;i++){
		if(s[i]<=k)
		dem1++;
	}
	for(int i=0;i<dem1;i++){
		if(s[i]>k)
		  dem2++;
	}
	int tmp=dem2;
	for(int i=0,j=dem1;j<n;i++,j++){
		if(s[i]>k)
		dem2--;
		if(s[j]>k)
		dem2++;
		tmp=min(tmp,dem2);
	}
	return tmp;
}
int main (){
    int a;
    cin>>a;
    while(a--){
    	long long n,m;
    	cin>>n>>m;
    	long long s[100000];
    	nhap(s,n);
    	cout<< sonho(s,n,m)<<endl;
	}
}

