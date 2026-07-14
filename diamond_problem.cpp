#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A"<<endl;
    }
};
class B:public A{};
class C:public A{};
class D:public B,public C{};
int main(){
D d1;
d1.show();
return 0;
}