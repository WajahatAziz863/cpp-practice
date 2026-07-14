#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    Rectangle(){
        length=1;
        width=1;
    }
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    int perimeter(){
        return 2*(length+width);
        }
    void display(){
        cout<<"Perimeter:"<<perimeter()<<endl;
    }
    };
    int main(){
    Rectangle r1;
    Rectangle r2(4,8);
    r1.display();
    r2.display();
    return 0;
    }