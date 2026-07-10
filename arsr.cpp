#include <iostream>
using namespace std;
struct student{
	string name;
	int marks;
	char grade;
};
int main()
{
	student p[3]={
		{"WajahatAziz",95,'A'},
		{"Wasif",83,'B'},
		{"Akram",70,'c'}
	};
	for(int i=0;i<3;i++){
	cout<<"Name is :"<<p[i].name<<endl;
	cout<<"Marks are :"<<p[i].marks<<endl;
	cout<<"Grade is :"<<p[i].grade<<endl;
}
	return 0;
}
