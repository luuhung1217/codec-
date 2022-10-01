#include <bits/stdc++.h> 
using namespace std;
class SinhVien{
	public:
		string ten,lop;
		char msv[20],email[20];
	public:
		friend istream& operator >> ( istream &is , SinhVien &a){
			is >> a.msv ;
			cin.ignore();
			getline(is,a.ten);
			getline(is,a.lop);
			is >> a.email ;
			return is;
		}
		friend ostream& operator << ( ostream  &os , SinhVien const& a){
			os << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return os;
		}
};
string malop(string a){
	string b="";
	b+=a[0]+a[1]+a[2];
	return b;
}
string masaulop(string a){
	a.erase(0,3);
	return a;
}
void sapxep(SinhVien ds[], int &n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(malop(ds[i].lop) > malop(ds[j].lop)){
				swap(ds[i],ds[j]);
			}
			else if(malop(ds[i].lop) == malop(ds[j].lop)){
				if(masaulop(ds[i].lop) > masaulop(ds[j].lop)){
					swap(ds[i],ds[j]);
				}
				else if(masaulop(ds[i].lop) == masaulop(ds[j].lop)){
					if(ds[i].msv > ds[j].msv){
						swap(ds[i],ds[j]);
					}
				}
			}
		}
	}
}
int main(){
    SinhVien ds[1000];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++){
    	cin >> ds[i];
	} 
    sapxep(ds, N);
    for(i=0;i<N;i++){
    	cout << ds[i];
	} 
    return 0;
}
