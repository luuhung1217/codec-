#include<bits/stdc++.h>
using namespace std;
int dem=1;
class GiangVien{
	public: 
		string name,bomon;
		int code;
	public:
		friend istream& operator>>(istream &is,GiangVien &a){
			scanf("\n");
			getline(is,a.name);
			getline(is,a.bomon);
			a.code=dem;
			dem++;
			return is;
		}
		friend ostream& operator<<(ostream &os,GiangVien &a){
			string kq[100];
			int dem1=0;
			string s=a.bomon;
			for(int i=0;i<s.size();i++){
				s[i]=toupper(s[i]);
			}
			stringstream ss(s);
			string tmp;
			while(ss>>tmp){
				kq[dem1++]=tmp;
			}
			string k;
			for(int i=0;i<dem1;i++){
				k+=kq[i][0];
			}
			os<<"GV";
			if(a.code<10){
				os<<"0"<<a.code<<" ";
			}
			else{
				os<<a.code<<" ";
			}
			os<<a.name<<" "<<k<<endl;
			return os;
		} 
};
string name1(string h){
    string s2[100];
    int t=0;
    stringstream ss(h);
    string tmp;
    while(ss>>tmp){
    	s2[t++]=tmp;
	}
	return s2[t-1];
}
void sapxep(GiangVien ds[],int &N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(name1(ds[i].name)>name1(ds[j].name)){
				swap(ds[i],ds[j]);
			}
			else if(name1(ds[i].name)==name1(ds[j].name)){
				if(ds[i].code>ds[j].code){
					swap(ds[i],ds[j]);
				}
			}
		}
	}
}
int main(){
	GiangVien ds[100];
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ds[i];
	}
	sapxep(ds,N);
	for(int i=0;i<N;i++){
		cout<<ds[i];
	}
	return 0;
}

