#include<bits/stdc++.h>
using namespace std;
class MonHoc{
	public:
		string code1,mon1;
	public:
		friend istream& operator>>(istream &is,MonHoc &a){
			//cin.ignore();
			is>>a.code1;
			scanf("\n");
			getline(is,a.mon1);
			return is;
		}
};
int dem=1;
class LichThi{
	public:
		string code,date,time,mon,soluong;
		int ma;
	public:
		friend istream& operator>>(istream &is,LichThi &a1){
			is>>a1.code>>a1.date>>a1.time>>a1.soluong;
			a1.ma=dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,LichThi &a1){
			os<<"T";
			if(a1.ma<10){
				os<<"00"<<a1.ma<<" ";
			}
			else if(a1.ma>=10&&a1.ma<100){
				os<<"0"<<a1.ma<<" ";
			}
			else if(a1.ma>=100){
				os<<a1.ma;
			}
			return os<<a1.code<<" "<<a1.mon<<" "<<a1.date<<" "<<a1.time<<" "<<a1.soluong<<endl;
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
int ngay1(string s){
	int so=(s[0]-48)*10+s[1]-48;
	return so;
}
int thang1(string s){
	int so=(s[3]-48)*10+s[4]-48;
	return so;
}
void process(MonHoc mh[],int n,LichThi lt[],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(lt[i].code==mh[j].code1){
				lt[i].mon=mh[j].mon1;
			}
		}	
	}
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(nam(lt[i].date)>nam(lt[j].date)){
				swap(lt[i],lt[j]);
			}
			else if(nam(lt[i].date)==nam(lt[j].date)){
				if(thang(lt[i].date)>thang(lt[j].date)){
					swap(lt[i],lt[j]);
				}
				else if(thang(lt[i].date)==thang(lt[j].date)){
					if(ngay(lt[i].date)>ngay(lt[j].date)){
						swap(lt[i],lt[j]);
					}
					else if(ngay(lt[i].date)==ngay(lt[j].date)){
						if(ngay1(lt[i].time)>ngay1(lt[j].time)){
							swap(lt[i],lt[j]);
						}
						else if(ngay1(lt[i].time)==ngay1(lt[j].time)){
							if(thang1(lt[i].time)>thang1(lt[j].time)){
								swap(lt[i],lt[j]);
							}
							else if(thang1(lt[i].time)==thang1(lt[j].time)){
								if(lt[i].mon<lt[j].mon){
									swap(lt[i],lt[j]);
								}
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
