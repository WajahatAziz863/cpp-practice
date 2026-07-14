#include <iostream>
using namespace std;
class Animal{
     public:
     Animal(string name){
    cout<<"Animal name is:"<<name<<endl;
     }
};
class Dog:public Animal{
    public:
    Dog(string name,string breed):Animal(name){
        cout<<"Dog breed is:"<<breed;
    }
};
int main(){
    Dog d1("Tommy","German shephard");
    return 0;
}
