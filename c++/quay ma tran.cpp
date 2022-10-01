#include<bits/stdc++.h>
using namespace std;
void nhap(int s[100][100],int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++)
			cin>>s[i][j];
		
	}
}
void quay(int s[100][100],int s1[100][100],int a,int b){
	int k=0,kt=0,hang=a,cot=b;
	while(kt<a*b){
		if(kt==(a*b)-1){
			s1[k][k]=s[k][k];
			break;
		}
		for(int i=k+1;i<cot;i++){
		    s1[k][i]=s[k][i-1];
		    kt++;
		}
		for(int i=k+1;i<hang;i++){
			s1[i][cot-1]=s[i-1][cot-1];
			kt++;
		}
		for(int i=cot-2;i>=k;i--){
			s1[hang-1][i]=s[hang-1][i+1];
			kt++;
		}
		for(int i=hang-2;i>=k;i--){
			s1[i][k]=s[i+1][k];
			kt++;
		}
		cot--;hang--;k++;
	}
}
void xuat(int s[100][100],int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++)
			cout<<s[i][j]<<" ";
		
	}
}
int main (){
     int n;
     cin>>n;
     for(int t=1;t<=n;t++){
     	int a,b;
     	cin>>a>>b;
     	int s[100][100],s1[100][100];
     	nhap(s,a,b);
     	quay(s,s1,a,b);
     	xuat(s1,a,b);
		cout<<endl;	
	 }
}

