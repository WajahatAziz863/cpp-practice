#include <iostream>
using namespace std;
class w{
   private:
   	int a;
   	float n;
   public:
     w(){
     	a=88;
     	n=74.6;
     }
   	friend void dost(w s);
};
void dost(w s){
	cout<<"Number is :"<<s.a<<endl;
	cout<<"Decimal is :"<<s.n<<endl;
}
int main(){
	w ob;
    dost(ob);
	return 0;
}