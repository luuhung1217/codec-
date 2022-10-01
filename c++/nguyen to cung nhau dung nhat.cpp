#include<bits/stdc++.h>
using namespace std;
int uscln(int a,int b){
	if(b==0) 
		return a;
	else return uscln(b,a%b);
}
int nt(int a){
	if(a<2){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
void ntcn(int a){
	int dem=0;
	for(int i=1;i<=a;i++){
		if(uscln(i,a)==1){
			dem++;
		}
	}
	if(nt(dem)){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
int main (){
    int n;
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
		cin>>a;
		ntcn(a);
		cout<<endl;
	} 
}

