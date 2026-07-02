#include <iostream>
using namespace std;
int main(){
	int a=7;
	int b=8;
	int *p=&a;
	 *p=b;
	cout<<a<<" "<<b<<" "<<*p;
	return 0;
}