#include<bits/stdc++.h>
using namespace std;
class MonHoc{
	public:
		string code1,mon1;
	public:
		friend istream& operator>>(istream &is,MonHoc &a){
			scanf("\n");
			getline(is,a.code1);
			getline(is,a.mon1);
			return is;
		}
};
int k=1;
class LichThi{
	public:
		string code2,date,time,mon2;
		int soluong,ma;
	public:
		friend istream& operator >>(istream &is,LichThi &b){
			scanf("\n");
			getline(is,b.code2);
			getline(is,b.date);
			getline(is,b.time);
			is>>b.soluong;
			b.ma=k;
			k++;
			return is;
		}
		friend ostream& operator <<(ostream &os,LichThi &b){
			os<<"T";
			if(b.ma<10){
				os<<"00";
			}
			else if(b.ma>=10&&b.ma<100){
				os<<"0";
			}
			os<<b.ma<<" "<<b.code2<<" "<<b.mon2<<" "<<b.time<<" "<<b.soluong<<endl;
			return os;
		}
};
int ngay(string s){
	int k=(s[0]-48)*10+s[1]-48;
	return k;
}
int thang(string s){
	int k=(s[3]-48)*10+s[4]-48;
	return k;
}
int nam(string s){
	int k=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
	return k;
}
void process(MonHoc mh[],int n,LichThi lt[],int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(lt[i].code2==mh[j].code1){
				lt[i].mon2=mh[j].mon1;
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
						if(ngay(lt[i].time)>ngay(lt[j].time)){
							swap(lt[i],lt[j]);
						}
						else if(ngay(lt[i].time)==ngay(lt[j].time)){
							if(thang(lt[i].time)>thang(lt[j].time)){
								swap(lt[i],lt[j]);
							}
							else if(thang(lt[i].time)==thang(lt[j].time)){
								if(lt[i].code2>lt[j].code2){
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

