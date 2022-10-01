#include<stdio.h>
#include<math.h>
int main (){
	int a;
	scanf("%d",&a);
	double sum=0;
	for(int i=1;i<=a;i++){
		sum+=(double)1/i;
	}
     printf("%.4lf",sum);
     return 0;
}

