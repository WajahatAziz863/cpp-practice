#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int* marks;
    Student(string n,int m){
        marks=new int;
        name=n;
        *marks=m;
    }
    Student(const Student &s){
        name=s.name;
        marks=s.marks;
    }
    void display(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Marks:"<<*marks<<endl;
    }
};
int main(){
    Student s1("Ali",300);
    Student s2=s1;
    *s2.marks=50;
    s1.display();
    s2.display();
    return 0;

}