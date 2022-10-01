#include<bits/stdc++.h>
using namespace std; 
int ktra(string a){
	int b=a.size(),dem=0,chan=0;
	if(a[0]!=' '){
		dem=1;
	}
	for(int i=b-1;i>0;i--){
		if(a[i]!=' ' && a[i-1]==' '){
			dem++;
		}
	}
	if((a[b-1]-48)%2==0){
		chan++;
	}
	for(int i=0;i<b-1;i++){
		if(a[i]!=' ' && a[i+1]==' '){
			if((a[i]-48)%2==0){
				chan++;
			}
 
		}
	}
	if(dem%2==0){
		if(chan > dem-chan){
			return 1;
		}
		else return 0;
	}
	else{
		if(chan < dem-chan){
			return 1;
		}
		else return 0;
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		
		string a;
		getline(cin,a);
		if(ktra(a))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
