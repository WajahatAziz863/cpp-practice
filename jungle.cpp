#include <iostream>
using namespace std;
class Tree{
    private:
    string name;
    public:
    Tree(){
        name="Barghad tree";
    }
    void showName(){
        cout<<"Name of tree is:"<<name<<endl;
    }
    void tall(){
        cout<<"Barghad Tree is very tall"<<endl;
    }
};
class Jungle{
    private:
    Tree *t;
    public:
    Jungle(Tree *ptr){
        t=ptr;
    }
    void show(){
        t->showName();
        t->tall();
    }

};
int main(){
    Tree t1;
    Jungle j(&t1);
    j.show();
    return 0;
}