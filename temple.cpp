#include <iostream>
using namespace std;
template <class a>
void man(a b){
	cout<<"Name is :"<<b<<endl;
}
template <class a>
void man(a c,a d){
	cout<<"Numbers are :"<<c<<" "<<d;
}
int main(){
	man("Wajahat Aziz");
	man(100.00,97.7);
	return 0;
}