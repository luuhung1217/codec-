#include<bits/stdc++.h>
using namespace std;
class Student{
	private:
		string id;
		string name;
	public:
//		Student(string name){
//			this->name=name;
//		}
		Student(){//ham khoi tao khong tham so
		}
		void setId(string id){
			this->id=id;
		}
//		string getId(){
//			return this->id;
//		}
		string getName(){
			return this->name;
		}
		void nhap(){
			getline(cin,id);
			getline(cin,name);
		}
		void in(){
			cout<<id<<" "<<name<<endl;
		}
		
};
int main(){
//	Student *st;
//	st=new Student("B20DCAT","luu van hung");
//	cout<<st->getId()<<endl;
//	cout<<st->getName()<<endl;
//	Student st[100];
	Student *st=new Student[100];
	for(int i=0;i<100;i++){
		st[i].nhap();
		st[i].in();
	}
}

