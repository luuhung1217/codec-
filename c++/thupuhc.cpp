#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;
	cin >> t ;
	while(t--){
		int n,a[1000000],b[1000000],dem=0;
		cin >> n;
		for(int i=0;i<1000000;i++)
			b[i]=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]=1;
		}
		sort(a,a+n);
		for(int i=a[0];i<=a[n-1];i++){
			if(b[i]==0){
				dem++;
			}
		}
		cout << dem << endl;
	} 
	return 0; 
}
