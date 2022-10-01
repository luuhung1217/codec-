#include<bits/stdc++.h>
using namespace std;
class TheLoai{
	public:
		string theloai;
	public:
		friend istream& operator>>(istream &is,TheLoai &a){
			scanf("\n");
			getline(is,a.theloai);
			return is;
		}
};
int dem=1;
class Phim{
	public:
		string code,date,phim,name;
		int soluong,ma;
	public:
		friend istream& operator>>(istream &is,Phim &a1){
			scanf("\n");
			getline(is,a1.code);
			getline(is,a1.date);
			getline(is,a1.phim);
			is>>a1.soluong;
			a1.ma=dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,Phim &a1){
			os<<"P";
			if(a1.ma<10){
				os<<"00"<<a1.ma<<" ";
			}
			else if(a1.ma>=10&&a1.ma<100){
				os<<"0"<<a1.ma<<" ";
			}
			else if(a1.ma>=100){
				os<<a1.ma;
			}
			return os<<a1.name<<" "<<a1.date<<" "<<a1.phim<<" "<<a1.soluong<<endl;
		}
};
int ngay(string s){
	int so=(s[0]-48)*10+s[1]-48;
	return so;
}
int thang(string s){
	int so=(s[3]-48)*10+s[4]-48;
	return so;
}
int nam(string s){
	int so=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
	return so;
}
int so(string s){
	int k=(s[2]-48)*100+(s[3]-48)*10+s[4]-48;
	return k;
}
void process(TheLoai tl[],int n,Phim p[],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(so(p[i].code)==j+1){
				p[i].name=tl[j].theloai;
			}
		}	
	}
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(nam(p[i].date)>nam(p[j].date)){
				swap(p[i],p[j]);
			}
			else if(nam(p[i].date)==nam(p[j].date)){
				if(thang(p[i].date)>thang(p[j].date)){
					swap(p[i],p[j]);
				}
				else if(thang(p[i].date)==thang(p[j].date)){
					if(ngay(p[i].date)>ngay(p[j].date)){
						swap(p[i],p[j]);
					}
					else if(ngay(p[i].date)==ngay(p[j].date)){
						if(p[i].phim>p[j].phim){
							swap(p[i],p[j]);
						}
						else if(p[i].phim==p[j].phim){
							if(p[i].soluong<p[j].soluong){
								swap(p[i],p[j]);
							}
						}
					}
				}
			}
		}
		
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}

