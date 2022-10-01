#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   char c;
   for(int i=1;i<=a;i++){
   	cin>>c;
   	if(c>='A'&&c<='Z'){
   		c+=32;
	}
	else if(c>='a'&&c<='z'){
		c-=32;
	}
	cout<<c<<endl;
   }
}

