#include<bits/stdc++.h>
using namespace std;
long long tach(long long a){
	long long c=a;
	long long n=0;
	int check=0;
	while(a>0){
		long long b=a%10;
		if(b==4&&check==0){
			c/=10;
			if(c%10==8){
				c/=10;
				if(c%10==0){
					c/=10;
			       check++;
				}
			}    
		}
	
		if(check==1){
			check++;
			a=c;
			b=a%10;
			n=n*10+b;
			a/=10;
			c/=10;
		}
		else{
			n=n*10+b;
			c=a;
			a/=10;
			c/=10;
		}
	}
	return n;
}
void in(long long n){
	while(n>0){
		int b=n%10;
		cout<<b;
		n/=10;
	}
}
int main (){
    int a;
    cin>>a;
    while(a--){
    	long long n;
    	cin>>n;
    	long long x=tach(n);
    	in(x);
    	cout<<endl;
	}
}

