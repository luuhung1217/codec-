#include<bits/stdc++.h>
using namespace std;
class People{
	protected:
	string id;
	string name;
	public:
		void setId(string id){
			this->id=id;
		}
		void say(){
			cout<<" Heloo.I'm people";
		}
};
class Student: public People{
	private :
		string code;
		string className;
	public:
		void test(){
			cout<<id;
		}
		void say(){
			cout<<"Luu Van Hung";
		}
		void SetCode(string id){
			this->id=id;
		}
};
int main(){
	Student st;
	st.SetCode("B20DCAT088");
	st.test();
	st.say();
}

