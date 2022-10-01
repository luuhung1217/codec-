#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		int b = a.size();
		int m = 0,n = 0,k = 0, c = 0;
		int p = 0;
		for(int i = 0;i < b;i++){
			if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' || a[i] >= '0' && a[i] <= '9' || a[i] == '.' || a[i] == '_'||a[i] == '@'){

			}else{
				p = 1;
				break;
			}
			if(a[i] == ' ' ){
				p = 1;
				break;
			} 
			if(k == 0){
				if(a[i] == '@'){
					k++;
				}else{
					m++;
					if(m > 64){
						p = 1;
						break;
					}	
				}			
			}else if(k > 0){
				if(a[i] == '@'){
					p=1;
					break;
				}
				if(n == 0 && a[i] == '.'){					
					p = 1;
					break;
				}
				n++;
				if(a[i] == '.'){
					c++;
				}
				if(n > 254){
					p = 1;
					break;
				}
				if(a[i] == '.' && a[i-1] == '.'|| a[i] == '.' && a[i+1] =='.'){
					p=1;
					break;
				}
			}
			
		}
		if(a[b-1] == '.' ){
			p = 1;
		}
		if(p == 1||c == 0||m == 0){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}
