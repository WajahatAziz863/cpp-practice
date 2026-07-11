#include <iostream>
using namespace std;
struct student{
	string name;
	int age;
	char grade;
};
int main (){
	student s7;
	cout<<"Enter name :";
cin>>s7.name;
	cout<<"Enter age :";
cin>>s7.age;
	cout<<"Enter grade :";
	cin>>s7.grade ;
	cout<<"Name is :"<<s7.name<<endl;
	cout<<"Age is :"<<s7.age<<endl;
	cout<<"Grade is :"<<s7.grade<<endl;
	return 0;
}