#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string a;
		getline(cin,a);
		int x=a.size();
		if(x<99){
			cout<<a;
		}
		else{
			int k=99;
			for(int i=99;i>=0;i--){
				if(a[i]==' '){
					k=i;
					break;
				}
			}
			for(int i=0;i<k;i++){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
	return 0;
}

