#include <iostream>
using namespace std;
class Teacher{
    public:
    string name="Ali";
};
class School{
    public:
    Teacher *t;
    School(Teacher *ptr){
        t=ptr;
    }
    void display(){
        cout<<"Name is:"<<t->name;
    }
};
int main(){
    Teacher t1;
    School s(&t1);
    s.display();
    return 0;
}