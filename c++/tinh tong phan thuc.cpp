#include<bits/stdc++.h>
using namespace std;
int main (){
   int a;
   cin>>a;
   float sum=0;
   for(int i=1;i<=a;i++){
   	 sum+=(float)1/i;
   }
   cout<<sum;
}

