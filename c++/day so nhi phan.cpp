#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int b[n],c[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int j=0;j<n;j++){
			cin>>c[j];
		}
		int max=0;
		for(int i=0;i<n;i++){
			int sum1=0,sum2=0;
			for(int j=i;j<n;j++){
				sum1+=b[j];
				sum2+=c[j];
				
				if(sum1==sum2){cout<<sum1<<" "<<sum2<<endl;
					int k = j-i+1;
					if(k>max)
						max=k;
				}
			}
		}
		cout<<max<<endl;
	}
}

