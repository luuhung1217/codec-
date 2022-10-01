#include<bits/stdc++.h>
using namespace std;
struct Student{
	int id;
	char name[20];
	float point;
};
int main(){
	Student st1;
	st1.id=1;
	strcpy(st1.name,"Nguyen Van A");
	st1.point=8;
	ofstream fp;
	fp.open("Nhom^.data",ios::binary);
	fp.write(reinterpret_cast<char *>(&st1), sizeof(Student));
	fp.close();
}

