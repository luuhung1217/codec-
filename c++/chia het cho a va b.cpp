#include<bits/stdc++.h>
using namespace std;
int main (){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
   	 int a,b,c,d;
   	 cin>>a>>b>>c>>d;
   	 int dem=0;
   	 	for(int j=a;j<=b;j++){
   	 		if(j%c==0||j%d==0){
   	 			dem++;
			}
		}
		cout<<dem<<endl;
   }
}

