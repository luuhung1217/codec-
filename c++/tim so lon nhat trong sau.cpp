#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		cin>>s;
		long long s1[100000],t=0;
		int j=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				int so=0;
				j=i;
				while(j<s.size()&&(s[j]>='0'&&s[j]<='9')){
					so=so*10+(int)s[j]-48;
					j++;
				}
			 	s1[t]=so;
			 	t++;
			 	i=j;
			}
		}
		sort(s1,s1+t);
		cout<<s1[t-1]<<endl;
	}

}

