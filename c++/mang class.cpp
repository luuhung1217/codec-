#include<bits/stdc++.h>
using namespace std;
class Student{
	private:
		string id;
		string name;
	public:
		Student(string name){
			this->name=name;
		}
		Student(){//ham khoi tao khong tham so
		}
		void setId(string id){
			this->id=id;
		}
		string getId(){
			return this->id;
		}
		string getName(){
			return this->name;
		}
		void nhap(){
			getline(cin,id);
			getline(cin,name);
		}
};
int main(){
	Student st;
	//st.setId("B20DCAT088");
	//st.name="";
	//cout<<st.id<<" "<<st.name<<endl;
	st.nhap();
	cout<<st.getId()<<" "<<st.getName()<<endl;
}

