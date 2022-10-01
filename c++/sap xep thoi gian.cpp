#include<bits/stdc++.h>
using namespace std;
struct ThoiGian{
	int gio,phut,giay;
};
void nhap(ThoiGian ds[],int N){
	for(int i=0;i<N;i++){
		cin>>ds[i].gio>>ds[i].phut>>ds[i].giay;
	}
	
}
void in(ThoiGian ds[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].gio>ds[j].gio){
				swap(ds[i],ds[j]);
			}
			if(ds[i].gio==ds[j].gio){
				if(ds[i].phut>ds[j].phut){
					swap(ds[i],ds[j]);
				}
				if(ds[i].phut==ds[j].phut){
					if(ds[i].giay>ds[j].giay){
						swap(ds[i],ds[j]);
					}
				}
			}
		}	
	}
	for(int i=0;i<N;i++){
		cout<<ds[i].gio<<" "<<ds[i].phut<<" "<<ds[i].giay<<endl;
	}
}
int main(){
	struct ThoiGian ds[5005];
	int N;
	cin>>N;
	nhap(ds,N);
	in(ds,N);
}

