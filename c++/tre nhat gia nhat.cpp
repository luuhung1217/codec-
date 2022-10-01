#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
	string ten;
	string date;
};
void nhap(DanhSach &d){
	scanf("\n");
	cin>>d.ten;
    cin>>d.date;
}
int ngay(string s){
	int sum=(s[0]-48)*10+s[1]-48;
	return sum;
}
int thang(string s){
	int sum=(s[3]-48)*10+s[4]-48;
	return sum;
}
int nam(string s){
	int sum=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
	return sum;
}
void in(DanhSach tuoi[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(nam(tuoi[i].date)>nam(tuoi[j].date)){
				swap(tuoi[i],tuoi[j]);
			}
			else if(nam(tuoi[i].date)==nam(tuoi[j].date)){
				if(thang(tuoi[i].date)>thang(tuoi[j].date)){
					swap(tuoi[i],tuoi[j]);
				}
				else if(thang(tuoi[i].date)==thang(tuoi[j].date)){
					if(ngay(tuoi[i].date)>ngay(tuoi[j].date)){
						swap(tuoi[i],tuoi[j]);
					}
				}
			}
		}	
	}
	cout<<tuoi[N-1].ten<<endl;
	cout<<tuoi[0].ten<<endl;
}
int main(){
	struct DanhSach tuoi[105];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++) nhap(tuoi[i]);
	in(tuoi,N);
	return 0;
}

