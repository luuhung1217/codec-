#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long long a[100000],c[100000],b[n+m],j=1;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
			
		for(int i=1;i<=m;i++){
			cin >> c[i];
		}
			
		for(int i=1;i<=n+m;i++){
			if(i<=n){
				b[i]=a[i];
			}
			else{
					b[i]=c[i-n];
			}
		
		}
				
		for(int i=1;i<n+m;i++){
			for(int j=i+1;j<=n+m;j++){
				if(b[i]>b[j]){
					int d=b[i];
					b[i]=b[j];
					b[j]=d;
				}
			}
		}
		for(int i=1;i<=n+m;i++){
			cout << b[i] << " ";
		}
			
		cout << endl;
	}
	return 0;
}
