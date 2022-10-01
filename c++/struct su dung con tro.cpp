#include<bits/stdc++.h>
using namespace std;
struct Employee{
	int code;
	string name;
	int year;
	string role;
}; 
void nhap(Employee &e){
	cin>>e.code;
	cin.ignore();
	getline(cin,e.name);
	getline(cin,e.role);
	cin>>e.year;
}
void xuat(Employee e){
	cout<<e.code<<" "<<e.name<<" "<<e.role<<" "<<e.year;
}
int main(){
	Employee *pE1;
	pE1=new Employee;
	nhap(*pE1);
	xuat(*pE1);
	cout<<pE1->code;
	delete pE1;
}

