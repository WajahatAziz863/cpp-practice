#include <iostream>
using namespace std;
class Animal{
    public:
     Animal(){
      cout<<"Parent class constructor called."<<endl;
     }
};
class Dog:public Animal{
    public:
     Dog(){
        cout<<"Child class constructor called.";
     }
};
int main(){
    Dog d1;
    return 0;

}