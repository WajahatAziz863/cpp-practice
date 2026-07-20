#include <iostream>
using namespace std;
class Talwar{
    public:
      string name="Shamsheer";
};
class Niyam{
    public:
    Talwar *t;
    Niyam(Talwar *ptr){
        t=ptr;
    }
    void display(){
        cout<<"Talwar name is: "<<t->name;
    }
};
int main(){
    Talwar t1;
    Niyam n(&t1);
    n.display();
    return 0;
}