#include<bits/stdc++.h>
using namespace std;
int dem=1;
class MonHoc{
	public:
	string ma,monhoc;
	public:
		friend istream& operator>>(istream &is,MonHoc &a){
			getline(is,a.ma);
			getline(is,a.monhoc);
			return is;
		}
		
};
class LichThi{
	public:
		string ma1,date,time,nhom;
		int stt;
		public:
		friend istream& operator>>(istream &is,LichThi &b){
			getline(is,b.ma1);
			getline(is,b.date);
			getline(is,b.time);
			getline(is,b.nhom);
			b.stt==dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,LichThi &b){
			os<<"T";
			if(b.stt<10){
				os<<"00"<<b.stt<<" ";
			}
			else if(b.stt>=10&&b.stt<100){
				os<<"0"<<b.stt<<" ";
			}
			else if(b.stt>=100){
				os<<b.stt<<" ";
			}
			os<<b.ma1<<" "<<" "<<b.date<<" "<<b.time<<" "<<b.nhom<<endl;
			return os;
		}	
};
int ngay(string s){
	int k;
	k=(s[0]-48)*10+s[1]-48;
	return k;
}
int thang(string s){
	int k=(s[3]-48)*10+s[4]-48;
	return k;
}
void process(MonHoc mh[],int n,LichThi lt[],int m){
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(lt[i].ma1>lt[j].ma1){
				swap(lt[i],lt[j]);
			}
		}
	}
	
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}

