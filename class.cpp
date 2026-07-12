#include <iostream>
#include <string>
using namespace std;
class result;
class student{
private:
string name;
int marks;
public:
void input(){
	cout<<"Enter name :";
	getline(cin,name);
	cout<<"Enter marks :";
	cin>>marks;
}
	friend class result;

};
class result{
	
public:
	
void fun(student s){
	cout<<"Name is :"; 
	cout<<s.name<<endl;
	
	cout<<"Marks are :";
	cout<<s.marks;
}
};
int main (){
	student s;
	result r;
	s.input();
	r.fun(s);
	return 0;
}