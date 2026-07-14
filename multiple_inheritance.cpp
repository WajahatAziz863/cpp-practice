#include <iostream>
using namespace std;
class Father{
    public:
    void showfather(){
        cout<<"This is father class."<<endl;
    }
};
class Mother{
    public:
    void showmother(){
        cout<<"This is mother class."<<endl;
    }
};
class Child:public Father,public Mother{
    public:
    void showchild(){
        cout<<"This is child class."<<endl;
    }
};
int main(){
   Child c1;
   c1.showfather();
   c1.showmother();
   c1.showchild();
return 0;
}