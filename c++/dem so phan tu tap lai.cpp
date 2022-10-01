#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int k=1;k<=t;k++){
		int n,a[100000],b[100000];
		cin >> n;
		for(int i=1;i<=n;i++)
			cin >> a[i];
		for(int i=1;i<=n;i++)
			b[i]=1;
		int dem=1,Dem=0;
		for(int i=1;i<n;i++){
			dem=1;
			if(b[i]){
				b[i]=0;
				for(int j=i+1;j<=n;j++){
					if(a[i]==a[j]){
						dem++;
						b[j]=0;
					}
				}
				if(dem>1)
					Dem+=dem;
			}
		}
		cout << Dem << endl;
	}
	return 0;
}

