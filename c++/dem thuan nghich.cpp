#include<stdio.h>
#include<math.h>
long long thuannghich(long long n){
	int dem=0,a[50];
	while(n>0){
		a[dem++]=n%10;
		n/=10;
	}
	for(int i=0;i<(dem/2);i++){
		if(a[i]!=a[(dem-i-1)]){
			return 0;
		}	  
	}
	return 1;
}
long long chan(long long n){
	int dem=0,a[50];
	while(n>0){
		a[dem++]=n%10;
		n/=10;
	}
	int sum=0;
	for(int i=0;i<dem;i++){
		sum+=a[i];
	}
	if(sum==17){
		return 1;
	}
		return 0;
}
int main(){
	int b;
	scanf("%d",&b);
	long long n=pow(10,b-1);
	long long m=pow(10,b);
	int dem=0;
	for(long long i=n;i<=m;i++ ){
		if(thuannghich(i)){
			dem++;
		}
	}
	printf("%d",dem);
	return 0 ;
}

