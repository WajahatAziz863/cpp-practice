//Parameterized constructor
#include <iostream>
#include <string>
using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
    void display(){
        cout<<"Area:"<<area()<<endl;
    }
};
int main(){
Rectangle r1(2,3);
r1.display();
return 0;
}
