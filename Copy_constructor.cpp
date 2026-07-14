#include <iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string n,int m){
        name=n;
        marks=m;
    }
    //Copy constructor
    Student(const Student &s){
        name=s.name;
        marks=s.marks;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    Student s1("Ali",88);
    Student s2=s1;
    s2.display();
    return 0;

}