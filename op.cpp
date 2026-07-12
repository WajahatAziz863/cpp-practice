#include <iostream>
using namespace std;
template <class W>
void pol(W a){
	cout<<"Template ka kamal :";
	cout<<a<<endl;
}
template <class W>
void pol(W c,W h){
	cout<<c<<" "<<h<<endl;
}
template <class W>
void pol(W n,W u,W i){
	cout<<n<<" "<<u<<" "<<i;
}
main (){
	pol(10.8);
	pol("Wajahat Aziz","family");
	pol(77,007,90);
	return 0;
}
