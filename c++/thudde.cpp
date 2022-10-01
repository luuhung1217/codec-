#include<bits/stdc++.h>
using namespace std;
int s[100][100], n,chuaxet[100],solt=0;
void nhap(){
	int i,j;
	fstream fp;
	fp.open("dothi.in");
	fp>>n;
	cout<<"So dinh cua do thi :"<<n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fp>>s[i][j];
			cout<<s[i][j];
		}
		cout<<endl;
	}
}
void DFS(int u){
	int v;
	chuaxet[u]=0;
	for(v=1;v<=n;v++){
		if(s[u][v]&&chuaxet[v])
			DFS(v);
	}
}
void ReInit(){
	for(int i=1;i<=n;i++)
		chuaxet[i]=1;
}
int test(){
	for(int u=1;u<=n;u++)
		if(chuaxet[u])
			return 1;
	return 0;
}
int Strong_conective(){
	nhap();
	ReInit();
	for(int u=1;u<=n;u++){
		chuaxet[u]=0;
		if(u==1) DFS(2);
		else DFS(1);
		if(test()) return 0;
		ReInit();
	}
	return 1;
}

int main(){
	cout<<Strong_conective();
}

