#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   while(a--){
   		string s;
   		cin>>s;
   		long long sum=0;
   		for(int i=0;i<s.size();i++){
   			s[i]-=48;
   			sum+=s[i];
		   }
		while(sum>9){
			int b=0;
			while(sum>0){
				b+=sum%10;
				sum/=10;
			}
			sum=b;
		}
		if(sum==9){
			cout<<"1";
		}
		else cout<<"0";
		cout<<endl;
   }
}

